#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QThread>
#include <iostream>
#include <QString>
#include <QObject>
class myThread : public QThread
{


public:
    myThread();
protected:
    void run();
signals :
    void activeVmListSignal();

};

#endif // MYTHREAD_H
