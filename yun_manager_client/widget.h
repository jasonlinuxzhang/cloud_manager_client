#ifndef WIDGET_H
#define WIDGET_H

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
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    QByteArray responseMessage;
    QString  &buildJsonString(messageType mesType, requestType reqType, QJsonObject& param);
    QString  &buildJsonString(messageType mesType, requestType reqType, QJsonArray &param);
    QString  &buildJsonString(messageType mesType, requestType reqType);
    void connectToServer();
    void handleResponse();
    void fetch_vm_list(QJsonObject &);

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonShutdown_clicked();

    void on_pushButtonDestroy_clicked();

    void on_pushButtonDefine_clicked();

    void on_pushButtonUndefine_clicked();



    void on_listWidgetActive_doubleClicked(const QModelIndex &index);

    void on_listWidgetInActive_doubleClicked(const QModelIndex &index);

    void on_pushButtonFetch_clicked();

    void readMessage();

    void displayError(QAbstractSocket::SocketError);

private:
    Ui::Widget *ui;
    QTcpSocket *tcpSocket;

};

#endif // WIDGET_H
