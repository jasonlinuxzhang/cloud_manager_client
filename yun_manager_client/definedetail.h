#ifndef DEFINEDETAIL_H
#define DEFINEDETAIL_H

#include <QWidget>
#include <QtCore>
#include <QString>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>
#include <QJsonObject>
#include <QStringList>
#include <QtNetwork>
#include <QIcon>
#include "common.h"


namespace Ui {
class defineDetail;
}

class defineDetail : public QWidget
{
    Q_OBJECT

public:
    explicit defineDetail(QWidget *parent = 0);
    ~defineDetail();



private:
    Ui::defineDetail *ui;


signals:
    void infoSend(const QString &);
public slots:
        void emit_signal_send();

};

#endif // DEFINEDETAIL_H
