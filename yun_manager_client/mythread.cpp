#include <QDebug>
#include "mythread.h"

myThread::myThread()
{

}

void myThread::run()
{
    while(1)
    {
        //emit activeVmListSignal();
        sleep(1);
    }
}






