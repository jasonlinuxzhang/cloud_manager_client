#ifndef MYINTERFACE_H
#define MYINTERFACE_H
#include "common.h"
#include <QString>
#include <QtCore>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>
#include <QJsonObject>
#include <QStringList>
#include <QtNetwork>
class myInterface
{
public:
    myInterface();
    static QString & buildJsonString(messageType mesType, requestType reqType, QJsonObject &param);
    static QString &buildJsonString(messageType mesType, requestType reqType, QJsonArray &param);
    static QString &buildJsonString(messageType mesType, requestType reqType);
};

#endif // MYINTERFACE_H
