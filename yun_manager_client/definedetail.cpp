#include "definedetail.h"
#include "ui_definedetail.h"

defineDetail::defineDetail(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::defineDetail)
{
    ui->setupUi(this);
}

defineDetail::~defineDetail()
{
    delete ui;
}
