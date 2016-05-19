#include "definedetail.h"
#include "ui_definedetail.h"
#include "widget.h"

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
    defineVmDetail.insert("Name", ui->lineEditName->text());
    defineVmDetail.insert("MemorySize", ui->spinBoxMemory->text().toInt());
    defineVmDetail.insert("DiskSize", ui->spinBoxDisk->text().toInt());
    defineVmDetail.insert("CpuNumber", ui->spinBoxCpu->text().toInt());
    defineVmDetail.insert("Mac", ui->lineEditMac->text());

    Widget w;
    QString jsonString = w.buildJsonString(REQUEST, DEFINE_VM, defineVmDetail);
    qDebug()<<jsonString;
    QString message(QString::number(jsonString.size(), 10) + jsonString);

    const QString sendMessage = jsonString;
    emit infoSend(sendMessage);


}

