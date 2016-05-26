#include <QDebug>
#include <QDataStream>
#include "mythread.h"
#include "common.h"
#include "myinterface.h"
myThread::myThread()
{
    tcpSocket = new QTcpSocket(this);
    tcpSocket->abort();
    connect(tcpSocket, SIGNAL(readyRead()), this, SLOT(readMessage()));
    connect(tcpSocket,SIGNAL(error(QAbstractSocket::SocketError)),
             this,SLOT(displayError(QAbstractSocket::SocketError)));
}

void myThread::run()
{
    while(1)
    {
        emit monitorEnableSignal();
        sleep(1);
    }
}

void myThread::readMonitorEnableSlot(bool enable)
{
    if(enable)
    {
        sendMonitorRequest();
    }
}

void myThread::sendMonitorRequest()
{
    QString jsonString = myInterface::buildJsonString(REQUEST, MONITOR);
    QString message(QString::number(jsonString.size(), 10) + jsonString);
    tcpSocket->abort();
    tcpSocket->connectToHost(QString(SERVER_ADDRESS), SERVER_PORT);
    tcpSocket->write(message.toLatin1().data(), message.size());
}


void myThread::readMessage()
{
    QDataStream in(tcpSocket);
    QString responseMessage;
    responseMessage = tcpSocket->readAll();
  //  qDebug()<<responseMessage;
    handleResponse(responseMessage);

}

void myThread::displayError(QAbstractSocket::SocketError)
{
    //QMessageBox::information(this, tr("Error"), tcpSocket->errorString());
    qDebug()<<tcpSocket->errorString();
}


void myThread::handleResponse(const QString &responseMessage)
{
   QJsonParseError json_error;
   QJsonDocument parse_document = QJsonDocument::fromJson(responseMessage.toLatin1(), &json_error);
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
                       case 7:writeDataToMain(json_object);
                       }
                   }
               }
           }

       }
   }
}

void myThread::writeDataToMain(QJsonObject &jsonObject)
{
    if(!jsonObject.contains("OperationResult"))
    {
        return ;
    }

    QJsonValue operationObjectType = jsonObject.take("OperationResult");
    if(!operationObjectType.isObject())
    {
        return;
    }
/*
    QJsonObject operationObject = operationObjectType.toObject();
    if(!operationObject.contains("HostInfo"))
    {
        return;
    }

    QJsonValue hostInfoType = operationObject.take("HostInfo");
    if(!hostInfoType.isObject())
    {
        return;
    }

    QJsonObject hostInfoObject = hostInfoType.toObject();
*/
    QJsonObject infoObject = operationObjectType.toObject();
    emit updateHostVmInfoSignal(infoObject);

}





