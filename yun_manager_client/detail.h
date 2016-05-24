#ifndef DETAIL_H
#define DETAIL_H

#include <QWidget>

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

public:
    void xmlWrite(const QString &, int );

signals:
    void vmStatusSignal(QString &vmName);

private slots:
    void on_pushButtonSet_clicked();
    void receiveVmStatus(QString &vmName, bool status);

};

#endif // DETAIL_H
