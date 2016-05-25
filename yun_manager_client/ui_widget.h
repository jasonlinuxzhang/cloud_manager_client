/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButtonStart;
    QPushButton *pushButtonShutdown;
    QPushButton *pushButtonDestroy;
    QPushButton *pushButtonDefine;
    QPushButton *pushButtonUndefine;
    QPushButton *pushButtonFetch;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout_2;
    QListWidget *listWidgetActive;
    QListWidget *listWidgetCpuUsage;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QListWidget *listWidgetInActive;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lineEditHostCpu;
    QLabel *label_4;
    QLineEdit *lineEditHostDisk;
    QLabel *label_5;
    QLineEdit *lineEditHostMemory;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(638, 371);
        verticalLayout_4 = new QVBoxLayout(Widget);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        pushButtonStart = new QPushButton(Widget);
        pushButtonStart->setObjectName(QStringLiteral("pushButtonStart"));

        horizontalLayout->addWidget(pushButtonStart);

        pushButtonShutdown = new QPushButton(Widget);
        pushButtonShutdown->setObjectName(QStringLiteral("pushButtonShutdown"));

        horizontalLayout->addWidget(pushButtonShutdown);

        pushButtonDestroy = new QPushButton(Widget);
        pushButtonDestroy->setObjectName(QStringLiteral("pushButtonDestroy"));

        horizontalLayout->addWidget(pushButtonDestroy);

        pushButtonDefine = new QPushButton(Widget);
        pushButtonDefine->setObjectName(QStringLiteral("pushButtonDefine"));

        horizontalLayout->addWidget(pushButtonDefine);

        pushButtonUndefine = new QPushButton(Widget);
        pushButtonUndefine->setObjectName(QStringLiteral("pushButtonUndefine"));

        horizontalLayout->addWidget(pushButtonUndefine);

        pushButtonFetch = new QPushButton(Widget);
        pushButtonFetch->setObjectName(QStringLiteral("pushButtonFetch"));

        horizontalLayout->addWidget(pushButtonFetch);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        listWidgetActive = new QListWidget(Widget);
        listWidgetActive->setObjectName(QStringLiteral("listWidgetActive"));

        horizontalLayout_2->addWidget(listWidgetActive);

        listWidgetCpuUsage = new QListWidget(Widget);
        listWidgetCpuUsage->setObjectName(QStringLiteral("listWidgetCpuUsage"));
        listWidgetCpuUsage->setMaximumSize(QSize(70, 16777215));

        horizontalLayout_2->addWidget(listWidgetCpuUsage);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        listWidgetInActive = new QListWidget(Widget);
        listWidgetInActive->setObjectName(QStringLiteral("listWidgetInActive"));
        listWidgetInActive->setEnabled(true);

        verticalLayout_2->addWidget(listWidgetInActive);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_4->addLayout(horizontalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lineEditHostCpu = new QLineEdit(Widget);
        lineEditHostCpu->setObjectName(QStringLiteral("lineEditHostCpu"));

        horizontalLayout_3->addWidget(lineEditHostCpu);

        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        lineEditHostDisk = new QLineEdit(Widget);
        lineEditHostDisk->setObjectName(QStringLiteral("lineEditHostDisk"));

        horizontalLayout_3->addWidget(lineEditHostDisk);

        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_3->addWidget(label_5);

        lineEditHostMemory = new QLineEdit(Widget);
        lineEditHostMemory->setObjectName(QStringLiteral("lineEditHostMemory"));

        horizontalLayout_3->addWidget(lineEditHostMemory);


        verticalLayout_3->addLayout(horizontalLayout_3);


        verticalLayout_4->addLayout(verticalLayout_3);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButtonStart->setText(QApplication::translate("Widget", "Start", 0));
        pushButtonShutdown->setText(QApplication::translate("Widget", "Shutdown", 0));
        pushButtonDestroy->setText(QApplication::translate("Widget", "Poweroff", 0));
        pushButtonDefine->setText(QApplication::translate("Widget", "Create", 0));
        pushButtonUndefine->setText(QApplication::translate("Widget", "Destroy", 0));
        pushButtonFetch->setText(QApplication::translate("Widget", "Fetech", 0));
        label->setText(QApplication::translate("Widget", "Active", 0));
        label_2->setText(QApplication::translate("Widget", "InActive", 0));
        label_6->setText(QApplication::translate("Widget", "HostMonitor", 0));
        label_3->setText(QApplication::translate("Widget", "Cpu", 0));
        label_4->setText(QApplication::translate("Widget", "Disk", 0));
        label_5->setText(QApplication::translate("Widget", "Memory", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
