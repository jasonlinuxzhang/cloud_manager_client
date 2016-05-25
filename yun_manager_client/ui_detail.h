/********************************************************************************
** Form generated from reading UI file 'detail.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DETAIL_H
#define UI_DETAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_detail
{
public:
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTextEdit *textEditVmDetail;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpinBox *spinBoxStorage;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QSpinBox *spinBoxCpu;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QSpinBox *spinBoxMemory;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QComboBox *comboBoxCdrom;
    QPushButton *pushButtonSet;
    QSpacerItem *verticalSpacer;

    void setupUi(QWidget *detail)
    {
        if (detail->objectName().isEmpty())
            detail->setObjectName(QStringLiteral("detail"));
        detail->resize(503, 334);
        horizontalLayout_7 = new QHBoxLayout(detail);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(detail);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textEditVmDetail = new QTextEdit(detail);
        textEditVmDetail->setObjectName(QStringLiteral("textEditVmDetail"));

        verticalLayout->addWidget(textEditVmDetail);


        horizontalLayout_7->addLayout(verticalLayout);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(detail);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        spinBoxStorage = new QSpinBox(detail);
        spinBoxStorage->setObjectName(QStringLiteral("spinBoxStorage"));

        horizontalLayout->addWidget(spinBoxStorage);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));

        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(detail);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        spinBoxCpu = new QSpinBox(detail);
        spinBoxCpu->setObjectName(QStringLiteral("spinBoxCpu"));

        horizontalLayout_3->addWidget(spinBoxCpu);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(detail);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        spinBoxMemory = new QSpinBox(detail);
        spinBoxMemory->setObjectName(QStringLiteral("spinBoxMemory"));

        horizontalLayout_4->addWidget(spinBoxMemory);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(detail);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        comboBoxCdrom = new QComboBox(detail);
        comboBoxCdrom->setObjectName(QStringLiteral("comboBoxCdrom"));

        horizontalLayout_5->addWidget(comboBoxCdrom);


        verticalLayout_2->addLayout(horizontalLayout_5);

        pushButtonSet = new QPushButton(detail);
        pushButtonSet->setObjectName(QStringLiteral("pushButtonSet"));

        verticalLayout_2->addWidget(pushButtonSet);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        horizontalLayout_6->addLayout(verticalLayout_2);


        horizontalLayout_7->addLayout(horizontalLayout_6);


        retranslateUi(detail);

        QMetaObject::connectSlotsByName(detail);
    } // setupUi

    void retranslateUi(QWidget *detail)
    {
        detail->setWindowTitle(QApplication::translate("detail", "Form", 0));
        label->setText(QApplication::translate("detail", "Virtual Machine Detail Configure", 0));
        label_2->setText(QApplication::translate("detail", "Storage(G)", 0));
        label_4->setText(QApplication::translate("detail", "CPU", 0));
        label_5->setText(QApplication::translate("detail", "Mem(X512M)", 0));
        label_6->setText(QApplication::translate("detail", "CDROM", 0));
        comboBoxCdrom->clear();
        comboBoxCdrom->insertItems(0, QStringList()
         << QString()
         << QApplication::translate("detail", "Win7 32", 0)
         << QApplication::translate("detail", "Ubuntu 64", 0)
         << QApplication::translate("detail", "Centos7.0 64", 0)
        );
        pushButtonSet->setText(QApplication::translate("detail", "Set", 0));
    } // retranslateUi

};

namespace Ui {
    class detail: public Ui_detail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DETAIL_H
