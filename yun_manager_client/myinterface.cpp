#include "myinterface.h"
#
myInterface::myInterface()
{

}

QString & myInterface::buildJsonString(messageType mesType, requestType reqType, QJsonObject &param)
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

QString &myInterface::buildJsonString(messageType mesType, requestType reqType, QJsonArray &param)
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

QString &myInterface::buildJsonString(messageType mesType, requestType reqType)
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
