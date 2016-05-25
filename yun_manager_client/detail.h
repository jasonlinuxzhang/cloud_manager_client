#ifndef DETAIL_H
#define DETAIL_H

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

namespace Ui {
class detail;
}

class detail : public QWidget
{
    Q_OBJECT

public:
    explicit detail(QWidget *parent = 0);

    ~detail();

private:
    Ui::detail *ui;
    bool isActive;
    QString name;
    QTcpSocket *tcpSocket;

public:
    void xmlWrite(const QString &, int );

signals:
    void vmStatusSignal(QString &vmName);

private slots:
    void on_pushButtonSet_clicked();
    void receiveVmStatus(QString &vmName, bool status);
    void readMessage();
    void displayError(QAbstractSocket::SocketError);

};

#endif // DETAIL_H
