#include "detail.h"
#include "ui_detail.h"
#include <QDebug>
#include <QMessageBox>
#include <QRegExp>
#include "myinterface.h"

detail::detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detail)
{
    ui->setupUi(this);
    isActive = false;
    ui->textEditVmDetail->setWordWrapMode(QTextOption::NoWrap);

    tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)), this,SLOT(displayError(QAbstractSocket::SocketError)));
}

detail::~detail()
{
    delete ui;
}

void detail::xmlWrite(const QString &xml, int port)
{
    ui->textEditVmDetail->setPlainText(xml);
    QString portMessage = "Port:" + QString("%1").arg(port);
    ui->textEditVmDetail->append(portMessage);


    QStringList strList1 = xml.split("\n");
    QString strTemp = strList1[1];
    QStringList strList2 = strTemp.split(">");
    QStringList strList3 = strList2[1].split("<");
    QString vmName = strList3[0];

    emit vmStatusSignal(vmName);
}


void detail::on_pushButtonSet_clicked()
{
    quint8 i = 0;
    QJsonObject requestObject;

    if(ui->spinBoxStorage->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Storage can't change in active vm"));
            return ;
        }
        requestObject.insert("DiskSize", ui->spinBoxStorage->text().toInt());
        i++;
    }
    if(ui->spinBoxCpu->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Cpu can't change in active vm"));
        }
        requestObject.insert("CpuNumber", ui->spinBoxCpu->text().toInt());
        i++;
    }
    if(ui->spinBoxMemory->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Memory can't change in active vm"));
        }
        requestObject.insert("MemorySize", ui->spinBoxMemory->text().toInt());
        i++;
    }
    QString cdromString = ui->comboBoxCdrom->currentText();
    if(!cdromString.isEmpty())
    {
        requestObject.insert("CdromType", cdromString);
        i++;
    }

    if(0 == i)
    {
        QMessageBox::information(this, tr("Error"), tr("Please Input Something"));
        return;
    }
    requestObject.insert("VmName", name);

    QString jsonString = myInterface::buildJsonString(REQUEST, CHANGE, requestObject);
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    tcpSocket->write(message.toLatin1().data(), message.size());

}

void detail::receiveVmStatus(QString &vmName, bool status)
{
    name = vmName;
    isActive = status;
}

void detail::readMessage()
{

}

void detail::displayError(QAbstractSocket::SocketError)
{
    qDebug()<<tcpSocket->errorString();
}

