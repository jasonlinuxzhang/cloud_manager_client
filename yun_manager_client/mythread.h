#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <iostream>
#include <QString>
#include <QtCore>
#include <QString>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonValue>
#include <QJsonParseError>
#include <QJsonObject>
#include <QStringList>
#include <QtNetwork>
class myThread : public QThread
{
    Q_OBJECT

public:
    myThread();
    void handleResponse(const QString &responseMessage);
    void writeDataToMain(QJsonObject &);
    void sendMonitorRequest();

protected:
    void run();
signals :
    void monitorEnableSignal();
    void updateHostVmInfoSignal(QJsonObject  &hostInfo);
public slots:

    void readMonitorEnableSlot(bool);
    void readMessage();
    void displayError(QAbstractSocket::SocketError);
private:
    QTcpSocket *tcpSocket;

};

#endif // MYTHREAD_H
