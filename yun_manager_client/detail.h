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

public:
    void xmlWrite(const QString &, int );
private slots:
    void on_pushButton_clicked();
};

#endif // DETAIL_H
