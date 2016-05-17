#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
             this,SLOT(displayError(QAbstractSocket::SocketError)));
}

Widget::~Widget()
{
    delete ui;
}


QString & Widget::buildJsonString(messageType mesType, requestType reqType, QJsonObject &param)
{
    QJsonObject jsonObject;
    jsonObject.insert("MessageType", mesType);
    jsonObject.insert("RequestType", reqType);
    jsonObject.insert("Param", param);
    QJsonDocument newJsonDoc;
    newJsonDoc.setObject(jsonObject);
    QByteArray byteArray = newJsonDoc.toJson(QJsonDocument::Compact);
    QString *jsonString = new QString(byteArray);
    return *jsonString;
}

QString &Widget::buildJsonString(messageType mesType, requestType reqType)
{
    QJsonObject jsonObject;
    jsonObject.insert("MessageType", mesType);
    jsonObject.insert("RequestType", reqType);
    QJsonDocument newJsonDoc;
    newJsonDoc.setObject(jsonObject);
    QByteArray byteArray = newJsonDoc.toJson(QJsonDocument::Compact);
    QString *jsonString = new QString(byteArray);
    return *jsonString;
}


void Widget::on_pushButtonStart_clicked()
{

}

void Widget::on_pushButtonShutdown_clicked()
{

}

void Widget::on_pushButtonDestroy_clicked()
{

}

void Widget::on_pushButtonDefine_clicked()
{

}

void Widget::on_pushButtonUndefine_clicked()
{

}

void Widget::on_listWidgetActive_doubleClicked(const QModelIndex &index)
{

}

void Widget::on_listWidgetInActive_doubleClicked(const QModelIndex &index)
{

}

void Widget::on_pushButtonFetch_clicked()
{

    QString jsonString = buildJsonString(REQUEST, FETCH);
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
    tcpSocket->abort();

}

void Widget::readMessage()
{

}

void Widget::displayError(QAbstractSocket::SocketError)
{
    //QMessageBox::information(this, tr("Error"), tcpSocket->errorString());
    qDebug()<<tcpSocket->errorString();
}
