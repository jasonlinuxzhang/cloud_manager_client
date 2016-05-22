#include "detail.h"
#include "ui_detail.h"

detail::detail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::detail)
{
    ui->setupUi(this);
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
}



void detail::on_pushButton_clicked()
{

}
