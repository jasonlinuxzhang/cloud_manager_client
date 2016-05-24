#include "detail.h"
#include "ui_detail.h"
#include <QDebug>
#include <QMessageBox>
#include <QRegExp>

detail::detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detail)
{
    ui->setupUi(this);
    isActive = false;
    ui->textEditVmDetail->setWordWrapMode(QTextOption::NoWrap);
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
    if(ui->spinBoxStorage->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Storage can't change in active vm"));
        }
    }
    if(ui->spinBoxCpu->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Cpu can't change in active vm"));
        }
    }
    if(ui->spinBoxMemory->text().toInt() > 0)
    {
        if(isActive)
        {
            QMessageBox::information(this, tr("Error"), tr("Memory can't change in active vm"));
        }
    }


}

void detail::receiveVmStatus(QString &vmName, bool status)
{
    name = vmName;
    isActive = status;

    qDebug()<<name<<" "<<isActive;
}

