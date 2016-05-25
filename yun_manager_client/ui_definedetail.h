/********************************************************************************
** Form generated from reading UI file 'definedetail.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFINEDETAIL_H
#define UI_DEFINEDETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_defineDetail
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *lineEditName;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QSpinBox *spinBoxMemory;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_6;
    QSpinBox *spinBoxDisk;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBoxCpu;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *lineEditMac;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *comboBoxSystem;
    QPushButton *pushButtonDefine;

    void setupUi(QWidget *defineDetail)
    {
        if (defineDetail->objectName().isEmpty())
            defineDetail->setObjectName(QStringLiteral("defineDetail"));
        defineDetail->resize(367, 173);
        verticalLayout_5 = new QVBoxLayout(defineDetail);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(defineDetail);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        lineEditName = new QLineEdit(defineDetail);
        lineEditName->setObjectName(QStringLiteral("lineEditName"));

        verticalLayout->addWidget(lineEditName);


        horizontalLayout->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(defineDetail);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        spinBoxMemory = new QSpinBox(defineDetail);
        spinBoxMemory->setObjectName(QStringLiteral("spinBoxMemory"));

        verticalLayout_2->addWidget(spinBoxMemory);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        label_6 = new QLabel(defineDetail);
        label_6->setObjectName(QStringLiteral("label_6"));

        verticalLayout_3->addWidget(label_6);

        spinBoxDisk = new QSpinBox(defineDetail);
        spinBoxDisk->setObjectName(QStringLiteral("spinBoxDisk"));

        verticalLayout_3->addWidget(spinBoxDisk);


        horizontalLayout->addLayout(verticalLayout_3);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_5 = new QLabel(defineDetail);
        label_5->setObjectName(QStringLiteral("label_5"));

        verticalLayout_4->addWidget(label_5);

        spinBoxCpu = new QSpinBox(defineDetail);
        spinBoxCpu->setObjectName(QStringLiteral("spinBoxCpu"));

        verticalLayout_4->addWidget(spinBoxCpu);


        horizontalLayout->addLayout(verticalLayout_4);


        verticalLayout_5->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(defineDetail);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        lineEditMac = new QLineEdit(defineDetail);
        lineEditMac->setObjectName(QStringLiteral("lineEditMac"));

        horizontalLayout_2->addWidget(lineEditMac);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(defineDetail);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        comboBoxSystem = new QComboBox(defineDetail);
        comboBoxSystem->setObjectName(QStringLiteral("comboBoxSystem"));

        horizontalLayout_3->addWidget(comboBoxSystem);


        verticalLayout_5->addLayout(horizontalLayout_3);

        pushButtonDefine = new QPushButton(defineDetail);
        pushButtonDefine->setObjectName(QStringLiteral("pushButtonDefine"));

        verticalLayout_5->addWidget(pushButtonDefine);


        retranslateUi(defineDetail);

        QMetaObject::connectSlotsByName(defineDetail);
    } // setupUi

    void retranslateUi(QWidget *defineDetail)
    {
        defineDetail->setWindowTitle(QApplication::translate("defineDetail", "Form", 0));
        label->setText(QApplication::translate("defineDetail", "Name", 0));
        label_2->setText(QApplication::translate("defineDetail", "Memory(x512M)", 0));
        label_6->setText(QApplication::translate("defineDetail", "DiskSize(G)", 0));
        label_5->setText(QApplication::translate("defineDetail", "CPU", 0));
        label_3->setText(QApplication::translate("defineDetail", "Mac", 0));
        label_4->setText(QApplication::translate("defineDetail", "System", 0));
        comboBoxSystem->clear();
        comboBoxSystem->insertItems(0, QStringList()
         << QApplication::translate("defineDetail", "Win7 32", 0)
         << QApplication::translate("defineDetail", "Ubuntu 64", 0)
         << QApplication::translate("defineDetail", "Centos7.0 64", 0)
        );
        pushButtonDefine->setText(QApplication::translate("defineDetail", "Create", 0));
    } // retranslateUi

};

namespace Ui {
    class defineDetail: public Ui_defineDetail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFINEDETAIL_H
