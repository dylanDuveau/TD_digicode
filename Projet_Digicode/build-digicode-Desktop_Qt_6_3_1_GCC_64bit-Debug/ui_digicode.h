/********************************************************************************
** Form generated from reading UI file 'digicode.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIGICODE_H
#define UI_DIGICODE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_digicode
{
public:
    QLineEdit *lineEditCode;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *pushButton9;
    QPushButton *pushButton7;
    QPushButton *pushButton3;
    QPushButton *pushButtonOn;
    QPushButton *pushButton5;
    QPushButton *pushButton6;
    QPushButton *pushButton2;
    QPushButton *pushButton8;
    QPushButton *pushButton0;
    QPushButton *pushButton1;
    QPushButton *pushButton4;
    QPushButton *pushButtonOk;

    void setupUi(QWidget *digicode)
    {
        if (digicode->objectName().isEmpty())
            digicode->setObjectName(QString::fromUtf8("digicode"));
        digicode->resize(800, 600);
        lineEditCode = new QLineEdit(digicode);
        lineEditCode->setObjectName(QString::fromUtf8("lineEditCode"));
        lineEditCode->setGeometry(QRect(230, 10, 281, 61));
        gridLayoutWidget = new QWidget(digicode);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(220, 90, 301, 281));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton9 = new QPushButton(gridLayoutWidget);
        pushButton9->setObjectName(QString::fromUtf8("pushButton9"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pushButton9->sizePolicy().hasHeightForWidth());
        pushButton9->setSizePolicy(sizePolicy);
        QPalette palette;
        QBrush brush(QColor(136, 138, 133, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(239, 239, 239, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton9->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        pushButton9->setFont(font);
        pushButton9->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton9, 0, 2, 1, 1);

        pushButton7 = new QPushButton(gridLayoutWidget);
        pushButton7->setObjectName(QString::fromUtf8("pushButton7"));
        sizePolicy.setHeightForWidth(pushButton7->sizePolicy().hasHeightForWidth());
        pushButton7->setSizePolicy(sizePolicy);
        QPalette palette1;
        QBrush brush2(QColor(0, 0, 0, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush3(QColor(255, 255, 255, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush3);
        QBrush brush4(QColor(246, 246, 245, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush4);
        QBrush brush5(QColor(119, 119, 118, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush5);
        QBrush brush6(QColor(159, 159, 157, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush2);
        QBrush brush7(QColor(238, 238, 236, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush7);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush2);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush4);
        QBrush brush8(QColor(255, 255, 220, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush3);
        QBrush brush9(QColor(202, 202, 202, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush9);
        QBrush brush10(QColor(159, 159, 159, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush10);
        QBrush brush11(QColor(184, 184, 184, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush11);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        QBrush brush12(QColor(118, 118, 118, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush12);
        QBrush brush13(QColor(247, 247, 247, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush7);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush7);
        QBrush brush14(QColor(177, 177, 177, 255));
        brush14.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush14);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush13);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush2);
        pushButton7->setPalette(palette1);
        pushButton7->setFont(font);
        pushButton7->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton7, 0, 0, 1, 1);

        pushButton3 = new QPushButton(gridLayoutWidget);
        pushButton3->setObjectName(QString::fromUtf8("pushButton3"));
        sizePolicy.setHeightForWidth(pushButton3->sizePolicy().hasHeightForWidth());
        pushButton3->setSizePolicy(sizePolicy);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton3->setPalette(palette2);
        pushButton3->setFont(font);
        pushButton3->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton3, 2, 2, 1, 1);

        pushButtonOn = new QPushButton(gridLayoutWidget);
        pushButtonOn->setObjectName(QString::fromUtf8("pushButtonOn"));
        sizePolicy.setHeightForWidth(pushButtonOn->sizePolicy().hasHeightForWidth());
        pushButtonOn->setSizePolicy(sizePolicy);
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButtonOn->setPalette(palette3);
        pushButtonOn->setFont(font);
        pushButtonOn->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButtonOn, 4, 0, 1, 1);

        pushButton5 = new QPushButton(gridLayoutWidget);
        pushButton5->setObjectName(QString::fromUtf8("pushButton5"));
        sizePolicy.setHeightForWidth(pushButton5->sizePolicy().hasHeightForWidth());
        pushButton5->setSizePolicy(sizePolicy);
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton5->setPalette(palette4);
        pushButton5->setFont(font);
        pushButton5->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton5, 1, 1, 1, 1);

        pushButton6 = new QPushButton(gridLayoutWidget);
        pushButton6->setObjectName(QString::fromUtf8("pushButton6"));
        sizePolicy.setHeightForWidth(pushButton6->sizePolicy().hasHeightForWidth());
        pushButton6->setSizePolicy(sizePolicy);
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton6->setPalette(palette5);
        pushButton6->setFont(font);
        pushButton6->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton6, 1, 2, 1, 1);

        pushButton2 = new QPushButton(gridLayoutWidget);
        pushButton2->setObjectName(QString::fromUtf8("pushButton2"));
        sizePolicy.setHeightForWidth(pushButton2->sizePolicy().hasHeightForWidth());
        pushButton2->setSizePolicy(sizePolicy);
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton2->setPalette(palette6);
        pushButton2->setFont(font);
        pushButton2->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton2, 2, 1, 1, 1);

        pushButton8 = new QPushButton(gridLayoutWidget);
        pushButton8->setObjectName(QString::fromUtf8("pushButton8"));
        sizePolicy.setHeightForWidth(pushButton8->sizePolicy().hasHeightForWidth());
        pushButton8->setSizePolicy(sizePolicy);
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton8->setPalette(palette7);
        pushButton8->setFont(font);
        pushButton8->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton8, 0, 1, 1, 1);

        pushButton0 = new QPushButton(gridLayoutWidget);
        pushButton0->setObjectName(QString::fromUtf8("pushButton0"));
        sizePolicy.setHeightForWidth(pushButton0->sizePolicy().hasHeightForWidth());
        pushButton0->setSizePolicy(sizePolicy);
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton0->setPalette(palette8);
        pushButton0->setFont(font);
        pushButton0->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton0, 4, 1, 1, 1);

        pushButton1 = new QPushButton(gridLayoutWidget);
        pushButton1->setObjectName(QString::fromUtf8("pushButton1"));
        sizePolicy.setHeightForWidth(pushButton1->sizePolicy().hasHeightForWidth());
        pushButton1->setSizePolicy(sizePolicy);
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton1->setPalette(palette9);
        pushButton1->setFont(font);
        pushButton1->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton1, 2, 0, 1, 1);

        pushButton4 = new QPushButton(gridLayoutWidget);
        pushButton4->setObjectName(QString::fromUtf8("pushButton4"));
        sizePolicy.setHeightForWidth(pushButton4->sizePolicy().hasHeightForWidth());
        pushButton4->setSizePolicy(sizePolicy);
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButton4->setPalette(palette10);
        pushButton4->setFont(font);
        pushButton4->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButton4, 1, 0, 1, 1);

        pushButtonOk = new QPushButton(gridLayoutWidget);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButtonOk->sizePolicy().hasHeightForWidth());
        pushButtonOk->setSizePolicy(sizePolicy1);
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush);
        pushButtonOk->setPalette(palette11);
        pushButtonOk->setFont(font);
        pushButtonOk->setAutoFillBackground(false);
        pushButtonOk->setIconSize(QSize(80, 80));

        gridLayout->addWidget(pushButtonOk, 4, 2, 1, 1);


        retranslateUi(digicode);

        QMetaObject::connectSlotsByName(digicode);
    } // setupUi

    void retranslateUi(QWidget *digicode)
    {
        digicode->setWindowTitle(QCoreApplication::translate("digicode", "digicode", nullptr));
        pushButton9->setText(QCoreApplication::translate("digicode", "9", nullptr));
        pushButton7->setText(QCoreApplication::translate("digicode", "7", nullptr));
        pushButton3->setText(QCoreApplication::translate("digicode", "3", nullptr));
        pushButtonOn->setText(QCoreApplication::translate("digicode", "ON", nullptr));
        pushButton5->setText(QCoreApplication::translate("digicode", "5", nullptr));
        pushButton6->setText(QCoreApplication::translate("digicode", "6", nullptr));
        pushButton2->setText(QCoreApplication::translate("digicode", "2", nullptr));
        pushButton8->setText(QCoreApplication::translate("digicode", "8", nullptr));
        pushButton0->setText(QCoreApplication::translate("digicode", "0", nullptr));
        pushButton1->setText(QCoreApplication::translate("digicode", "1", nullptr));
        pushButton4->setText(QCoreApplication::translate("digicode", "4", nullptr));
        pushButtonOk->setText(QCoreApplication::translate("digicode", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class digicode: public Ui_digicode {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIGICODE_H
