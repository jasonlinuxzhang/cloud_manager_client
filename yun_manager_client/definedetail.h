#ifndef DEFINEDETAIL_H
#define DEFINEDETAIL_H

#include <QWidget>

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
};

#endif // DEFINEDETAIL_H
