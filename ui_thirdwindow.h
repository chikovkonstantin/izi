/********************************************************************************
** Form generated from reading UI file 'thirdwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THIRDWINDOW_H
#define UI_THIRDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_thirdwindow
{
public:
    QSpinBox *spinBox;
    QPushButton *del_button;
    QLabel *label;

    void setupUi(QWidget *thirdwindow)
    {
        if (thirdwindow->objectName().isEmpty())
            thirdwindow->setObjectName("thirdwindow");
        thirdwindow->resize(400, 300);
        spinBox = new QSpinBox(thirdwindow);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(160, 90, 81, 41));
        del_button = new QPushButton(thirdwindow);
        del_button->setObjectName("del_button");
        del_button->setGeometry(QRect(160, 180, 81, 41));
        label = new QLabel(thirdwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 40, 201, 31));

        retranslateUi(thirdwindow);

        QMetaObject::connectSlotsByName(thirdwindow);
    } // setupUi

    void retranslateUi(QWidget *thirdwindow)
    {
        thirdwindow->setWindowTitle(QCoreApplication::translate("thirdwindow", "\320\243\320\264\320\260\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        del_button->setText(QCoreApplication::translate("thirdwindow", "\320\243\320\224\320\220\320\233\320\230\320\242\320\254", nullptr));
        label->setText(QCoreApplication::translate("thirdwindow", "\320\235\320\236\320\234\320\225\320\240 \320\243\320\224\320\220\320\233\320\257\320\225\320\234\320\236\320\231 \320\227\320\220\320\237\320\230\320\241\320\230:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class thirdwindow: public Ui_thirdwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THIRDWINDOW_H
