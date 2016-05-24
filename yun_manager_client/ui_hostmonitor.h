/********************************************************************************
** Form generated from reading UI file 'hostmonitor.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSTMONITOR_H
#define UI_HOSTMONITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_hostMonitor
{
public:
    QTextEdit *textEdit;

    void setupUi(QWidget *hostMonitor)
    {
        if (hostMonitor->objectName().isEmpty())
            hostMonitor->setObjectName(QStringLiteral("hostMonitor"));
        hostMonitor->resize(312, 302);
        textEdit = new QTextEdit(hostMonitor);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(10, 10, 161, 181));

        retranslateUi(hostMonitor);

        QMetaObject::connectSlotsByName(hostMonitor);
    } // setupUi

    void retranslateUi(QWidget *hostMonitor)
    {
        hostMonitor->setWindowTitle(QApplication::translate("hostMonitor", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class hostMonitor: public Ui_hostMonitor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSTMONITOR_H
