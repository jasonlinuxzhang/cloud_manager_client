#ifndef WIDGET_H
#define WIDGET_H

#include "definedetail.h"
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
#include <QListWidgetItem>
#include "common.h"
#include "detail.h"
#include "mythread.h"


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
    void write_detail(QJsonObject &);

private slots:
    void on_pushButtonStart_clicked();

    void on_pushButtonShutdown_clicked();

    void on_pushButtonDestroy_clicked();

    void on_pushButtonDefine_clicked();

    void on_pushButtonUndefine_clicked();



    void on_pushButtonFetch_clicked();

    void readMessage();

    void displayError(QAbstractSocket::SocketError);

    void on_listWidgetActive_itemDoubleClicked(QListWidgetItem *item);

    void on_listWidgetInActive_itemDoubleClicked(QListWidgetItem *item);

    void readMonitorEnableRequest();

    void recvUpdateHostVmInfo(QJsonObject &hostInfo);

    void receiveVmStatusRequest(QString &vmName);

private:
    Ui::Widget *ui;
    QTcpSocket *tcpSocket;
    defineDetail *defineObject;
    detail *vmDetail;
    QIcon vmImage;
    myThread *anThread;

public slots:
    void defineDetailRecv(const QString &);

signals:
    void activeVmListResponseSignal(QString &);

    void monitorEnableSignal(bool enable);

    void vmStatusSignal(QString &vmName, bool status);

};

#endif // WIDGET_H
