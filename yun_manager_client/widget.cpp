#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include "definedetail.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->listWidgetActive->setSelectionMode( QAbstractItemView::ExtendedSelection );
    ui->listWidgetInActive->setSelectionMode( QAbstractItemView::ExtendedSelection );
    tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
             this,SLOT(displayError(QAbstractSocket::SocketError)));

    vmImage = QIcon(":images/computer.jpg");

    defineObject = NULL;

    on_pushButtonFetch_clicked();
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

QString &Widget::buildJsonString(messageType mesType, requestType reqType, QJsonArray &param)
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
    QList<QListWidgetItem *> itemList = ui->listWidgetInActive->selectedItems();
    int nCount = itemList.count();
    if(nCount < 1)
    {
        QMessageBox::information(this, tr("Error"), tr("Please select vm"));
        return;
    }

    QJsonArray vmArray;
    for(int i = 0; i < nCount; i++)
    {
       // ui->listWidgetInActive->row(itemList[i]);
        qDebug()<<itemList[i]->text();
        vmArray.insert(i, itemList[i]->text());
    }

    QString jsonString = buildJsonString(REQUEST, START_VM, vmArray);
    qDebug()<<jsonString;
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}

void Widget::on_pushButtonShutdown_clicked()
{

}

void Widget::on_pushButtonDestroy_clicked()
{
    QList<QListWidgetItem *> itemList = ui->listWidgetActive->selectedItems();
    int nCount = itemList.count();
    if(nCount < 1)
    {
        QMessageBox::information(this, tr("Error"), tr("Please select vm"));
        return;
    }

    QJsonArray vmArray;
    for(int i = 0; i < nCount; i++)
    {
       // ui->listWidgetInActive->row(itemList[i]);
        qDebug()<<itemList[i]->text();
        vmArray.insert(i, itemList[i]->text());
    }

    QString jsonString = buildJsonString(REQUEST, DESTROY_VM, vmArray);
    qDebug()<<jsonString;
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}

void Widget::defineDetailRecv(const QString &str)
{
    QString message(QString::number(str.size(), 10) + str);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
  //  qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
  //  qDebug()<<message<<endl;
   tcpSocket->write(message.toLatin1().data(), message.size());
}

void Widget::on_pushButtonDefine_clicked()
{
    defineObject = new defineDetail();

    connect(defineObject, SIGNAL(infoSend(const QString &)), this, SLOT(defineDetailRecv(const QString &)));
    defineObject->show();
}

void Widget::on_pushButtonUndefine_clicked()
{
    QList<QListWidgetItem *> itemList = ui->listWidgetInActive->selectedItems();
    int nCount = itemList.count();
    if(nCount < 1)
    {
        QMessageBox::information(this, tr("Error"), tr("Please select inactive vm"));
        return;
    }

    QJsonArray vmArray;
    for(int i = 0; i < nCount; i++)
    {
        qDebug()<<itemList[i]->text();
        vmArray.insert(i, itemList[i]->text());
    }

    QString jsonString = buildJsonString(REQUEST, UNDEFINE_VM, vmArray);
    qDebug()<<jsonString;
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}



void Widget::on_pushButtonFetch_clicked()
{
    QString jsonString = buildJsonString(REQUEST, FETCH);
    QString message(QString::number(jsonString.size(), 10) + jsonString);

    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}

void Widget::readMessage()
{
    QDataStream in(tcpSocket);
    QString response;
    if(tcpSocket->bytesAvailable() < (int)sizeof(quint16))
        return;
    responseMessage = tcpSocket->readAll();
    qDebug()<<responseMessage;
    this->handleResponse();

}

void Widget::displayError(QAbstractSocket::SocketError)
{
    //QMessageBox::information(this, tr("Error"), tcpSocket->errorString());
    qDebug()<<tcpSocket->errorString();
}



void Widget::fetch_vm_list(QJsonObject& jsonObject)
{
    if(!jsonObject.contains("Operation_Result"))
    {
            return;
    }
    QJsonValue operationValue = jsonObject.take("Operation_Result");
    if(!operationValue.isObject())
    {
        return;
    }
    QJsonObject operationObject = operationValue.toObject();
    if(!operationObject.contains("Active_Vm") || !operationObject.contains("Inactive_Vm"))
    {
        return;
    }

    QJsonValue activeVm = operationObject.take("Active_Vm");
    QJsonValue inactiveVm = operationObject.take("Inactive_Vm");

    if(activeVm.isArray())
    {
        QJsonArray activeVmArray = activeVm.toArray();
        ui->listWidgetActive->clear();
        int count = activeVmArray.count();
        for(int i = 0; i < count; i++)
        {
            QListWidgetItem *itemVm = new QListWidgetItem(vmImage, activeVmArray.at(i).toString(), NULL, NULL);
          //  ui->listWidgetActive->addItem(activeVmArray.at(i).toString());
            ui->listWidgetActive->addItem(itemVm);
        }
    }

    if(inactiveVm.isArray())
    {
        QJsonArray inactiveVmArray = inactiveVm.toArray();
        ui->listWidgetInActive->clear();
        int count = inactiveVmArray.count();
        for(int i = 0; i < count; i++)
        {
         //   ui->listWidgetInActive->addItem(inactiveVmArray.at(i).toString());
            QListWidgetItem *itemVm = new QListWidgetItem(vmImage, inactiveVmArray.at(i).toString(), NULL, NULL);
            ui->listWidgetInActive->addItem(itemVm);
        }
    }
}

void Widget::write_detail(QJsonObject &jsonObject)
{
    if(!jsonObject.contains("Operation_Result"))
    {
            return;
    }
    QJsonValue operationValue = jsonObject.take("Operation_Result");
    if(!operationValue.isObject())
    {
        return;
    }
    QJsonObject operationObject = operationValue.toObject();
    if(!operationObject.contains("Xml"))
    {
        return ;
    }
    QJsonValue xmlObject = operationObject.take("Xml");
    if(!xmlObject.isString())
    {
        return;
    }

    if(!operationObject.contains("Port"))
    {
        return;
    }
    QJsonValue vmPort = operationObject.take("Port");
    if(!vmPort.isDouble())
    {
        return ;
    }

    if(NULL != vmDetail)
    {
        vmDetail->close();
    }
    vmDetail = new detail();
    vmDetail->show();
    vmDetail->xmlWrite(xmlObject.toString(), vmPort.toInt());

}

void Widget::handleResponse()
{
    QJsonParseError json_error;
    QJsonDocument parse_document = QJsonDocument::fromJson(responseMessage, &json_error);
    if(json_error.error == QJsonParseError::NoError)
    {
        if(parse_document.isObject())
        {
            QJsonObject json_object = parse_document.object();
            if(json_object.contains("MessageType"))
            {
                QJsonValue messageType = json_object.take("MessageType");
                if(messageType.isDouble())
                {
                    if(messageType.toInt() != 1)
                    {
                        return ;
                    }
                    if(json_object.contains("RequestType"))
                    {
                        QJsonValue requestType;
                        requestType = json_object.take("RequestType");
                        if(!requestType.isDouble())
                        {
                            return ;
                        }
                        switch(requestType.toInt())
                        {
                        case 2:fetch_vm_list(json_object);if(NULL != defineObject){defineObject->close();}break;
                        case 5:write_detail(json_object); break;
                        }
                    }
                }
            }

        }
    }
}


void Widget::on_listWidgetActive_itemDoubleClicked(QListWidgetItem *item)
{
    QString vmName = item->text();
    QJsonObject vmNameObject;
    vmNameObject.insert("Name", vmName);

    QString jsonString = buildJsonString(REQUEST, SHOW_DETAIL, vmNameObject);
    QString message(QString::number(jsonString.size(), 10) + jsonString);

    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}

void Widget::on_listWidgetInActive_itemDoubleClicked(QListWidgetItem *item)
{
    QString vmName = item->text();
    QJsonObject vmNameObject;
    vmNameObject.insert("Name", vmName);

    QString jsonString = buildJsonString(REQUEST, SHOW_DETAIL, vmNameObject);
    QString message(QString::number(jsonString.size(), 10) + jsonString);

    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    qDebug()<<QString(SERVER_ADDRESS)<<":"<<SERVER_PORT<<endl;
    qDebug()<<message<<endl;
    tcpSocket->write(message.toLatin1().data(), message.size());
}
