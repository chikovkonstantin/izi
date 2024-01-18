/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QLineEdit *name_line;
    QLineEdit *gender_line;
    QLineEdit *surname_line;
    QLineEdit *date_line;
    QTextEdit *diagnosis_line;
    QSpinBox *age_spinbox;
    QPushButton *add_button;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName("secondwindow");
        secondwindow->resize(535, 374);
        name_line = new QLineEdit(secondwindow);
        name_line->setObjectName("name_line");
        name_line->setGeometry(QRect(20, 30, 113, 22));
        gender_line = new QLineEdit(secondwindow);
        gender_line->setObjectName("gender_line");
        gender_line->setGeometry(QRect(180, 30, 113, 22));
        surname_line = new QLineEdit(secondwindow);
        surname_line->setObjectName("surname_line");
        surname_line->setGeometry(QRect(20, 90, 113, 22));
        date_line = new QLineEdit(secondwindow);
        date_line->setObjectName("date_line");
        date_line->setGeometry(QRect(180, 100, 113, 22));
        diagnosis_line = new QTextEdit(secondwindow);
        diagnosis_line->setObjectName("diagnosis_line");
        diagnosis_line->setGeometry(QRect(40, 200, 211, 131));
        age_spinbox = new QSpinBox(secondwindow);
        age_spinbox->setObjectName("age_spinbox");
        age_spinbox->setGeometry(QRect(400, 50, 51, 41));
        add_button = new QPushButton(secondwindow);
        add_button->setObjectName("add_button");
        add_button->setGeometry(QRect(320, 230, 121, 41));
        label = new QLabel(secondwindow);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 60, 61, 21));
        label_2 = new QLabel(secondwindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 180, 101, 16));

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QWidget *secondwindow)
    {
        secondwindow->setWindowTitle(QCoreApplication::translate("secondwindow", "\320\224\320\276\320\261\320\260\320\262\320\273\320\265\320\275\320\270\320\265 \320\267\320\260\320\277\320\270\321\201\320\270", nullptr));
        name_line->setPlaceholderText(QCoreApplication::translate("secondwindow", "\320\230\320\234\320\257", nullptr));
        gender_line->setPlaceholderText(QCoreApplication::translate("secondwindow", "\320\237\320\236\320\233", nullptr));
        surname_line->setPlaceholderText(QCoreApplication::translate("secondwindow", "\320\244\320\220\320\234\320\230\320\233\320\230\320\257", nullptr));
        date_line->setPlaceholderText(QCoreApplication::translate("secondwindow", "\320\224\320\220\320\242\320\220", nullptr));
        add_button->setText(QCoreApplication::translate("secondwindow", "\320\241\320\236\320\245\320\240\320\220\320\235\320\230\320\242\320\254", nullptr));
        label->setText(QCoreApplication::translate("secondwindow", "\320\222\320\236\320\227\320\240\320\220\320\241\320\242:", nullptr));
        label_2->setText(QCoreApplication::translate("secondwindow", "\320\224\320\230\320\220\320\223\320\235\320\236\320\227:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
