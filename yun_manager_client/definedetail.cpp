#include "definedetail.h"
#include "ui_definedetail.h"
#include "widget.h"
#include <QMessageBox>

defineDetail::defineDetail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::defineDetail)
{
    ui->setupUi(this);
    connect(ui->pushButtonDefine, SIGNAL(clicked()), this, SLOT(emit_signal_send()));
}

defineDetail::~defineDetail()
{
    delete ui;
}


void defineDetail::emit_signal_send()
{
    QJsonObject defineVmDetail;

    QString name = ui->lineEditName->text();
    if(name.isEmpty())
    {
        QMessageBox::information(this, tr("Error"), tr("Please Enter Name"));
        return ;
    }

    QString mac = ui->lineEditMac->text();
    if(mac.isEmpty())
    {
        QMessageBox::information(this, tr("Error"), tr("Please input mac"));
        return;
    }

    int memorySize = ui->spinBoxMemory->text().toInt();
    if(memorySize <= 0)
    {
       QMessageBox::information(this, tr("Error"), tr("Please input memory size"));
       return ;
    }

    int diskSize = ui->spinBoxDisk->text().toInt();
    if(diskSize <= 0)
    {
        QMessageBox::information(this, tr("Error"), tr("Please input disk size"));
        return ;
    }

    int cpuNumber = ui->spinBoxCpu->text().toInt();
    if(cpuNumber <= 0)
    {
        QMessageBox::information(this, tr("Error"), tr("Please input cpu number"));
        return ;
    }

    QString systemType = ui->comboBoxSystem->currentText();
    if(systemType.isEmpty())
    {
        QMessageBox::information(this, tr("Error"), tr("Please input system"));
        return;
    }
    defineVmDetail.insert("Name", name);
    defineVmDetail.insert("MemorySize", memorySize);
    defineVmDetail.insert("DiskSize", diskSize);
    defineVmDetail.insert("CpuNumber", cpuNumber);
    defineVmDetail.insert("Mac", mac);
    defineVmDetail.insert("System", systemType);

    Widget w;
    QString jsonString = w.buildJsonString(REQUEST, DEFINE_VM, defineVmDetail);
    QString message(QString::number(jsonString.size(), 10) + jsonString);

    const QString sendMessage = jsonString;
    emit infoSend(sendMessage);


}

