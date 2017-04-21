/********************************************************************************
** Form generated from reading UI file 'baza.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAZA_H
#define UI_BAZA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Baza
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QTableView *tableView;
    QPushButton *pushButton_4;
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *lineEditID;
    QLabel *label_3;
    QLineEdit *lineEditMarka;
    QLabel *label_4;
    QLineEdit *lineEditModel;
    QLabel *label_5;
    QLineEdit *lineEditPrzek;
    QLabel *label_6;
    QLineEdit *lineEditRozdz;
    QLabel *label_7;
    QLineEdit *lineEditProc;
    QLabel *label_8;
    QLineEdit *lineEditGraf;
    QLabel *label_9;
    QLineEdit *lineEditRAM;
    QLabel *label_10;
    QLineEdit *lineEditDysk;
    QLabel *label_11;
    QLineEdit *lineEditCena;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QDialog *Baza)
    {
        if (Baza->objectName().isEmpty())
            Baza->setObjectName(QStringLiteral("Baza"));
        Baza->resize(875, 467);
        pushButton = new QPushButton(Baza);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(30, 320, 75, 23));
        label = new QLabel(Baza);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 430, 121, 16));
        pushButton_2 = new QPushButton(Baza);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(120, 320, 75, 23));
        pushButton_3 = new QPushButton(Baza);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(210, 320, 75, 23));
        tableView = new QTableView(Baza);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(300, 10, 551, 381));
        pushButton_4 = new QPushButton(Baza);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(520, 400, 75, 23));
        layoutWidget = new QWidget(Baza);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 40, 251, 256));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        lineEditID = new QLineEdit(layoutWidget);
        lineEditID->setObjectName(QStringLiteral("lineEditID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEditID);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        lineEditMarka = new QLineEdit(layoutWidget);
        lineEditMarka->setObjectName(QStringLiteral("lineEditMarka"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEditMarka);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        lineEditModel = new QLineEdit(layoutWidget);
        lineEditModel->setObjectName(QStringLiteral("lineEditModel"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEditModel);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_5);

        lineEditPrzek = new QLineEdit(layoutWidget);
        lineEditPrzek->setObjectName(QStringLiteral("lineEditPrzek"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEditPrzek);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_6);

        lineEditRozdz = new QLineEdit(layoutWidget);
        lineEditRozdz->setObjectName(QStringLiteral("lineEditRozdz"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEditRozdz);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_7);

        lineEditProc = new QLineEdit(layoutWidget);
        lineEditProc->setObjectName(QStringLiteral("lineEditProc"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEditProc);

        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QStringLiteral("label_8"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_8);

        lineEditGraf = new QLineEdit(layoutWidget);
        lineEditGraf->setObjectName(QStringLiteral("lineEditGraf"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEditGraf);

        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QStringLiteral("label_9"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        lineEditRAM = new QLineEdit(layoutWidget);
        lineEditRAM->setObjectName(QStringLiteral("lineEditRAM"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEditRAM);

        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QStringLiteral("label_10"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_10);

        lineEditDysk = new QLineEdit(layoutWidget);
        lineEditDysk->setObjectName(QStringLiteral("lineEditDysk"));

        formLayout->setWidget(8, QFormLayout::FieldRole, lineEditDysk);

        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QStringLiteral("label_11"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_11);

        lineEditCena = new QLineEdit(layoutWidget);
        lineEditCena->setObjectName(QStringLiteral("lineEditCena"));

        formLayout->setWidget(9, QFormLayout::FieldRole, lineEditCena);

        pushButton_5 = new QPushButton(Baza);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 400, 251, 23));
        pushButton_6 = new QPushButton(Baza);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(120, 360, 75, 23));

        retranslateUi(Baza);

        QMetaObject::connectSlotsByName(Baza);
    } // setupUi

    void retranslateUi(QDialog *Baza)
    {
        Baza->setWindowTitle(QApplication::translate("Baza", "Baza danych", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Baza", "Zapisz", Q_NULLPTR));
        label->setText(QApplication::translate("Baza", "TextLabel", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Baza", "Zaktualizuj", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Baza", "Usu\305\204", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("Baza", "Wczytaj", Q_NULLPTR));
        label_2->setText(QApplication::translate("Baza", "ID", Q_NULLPTR));
        label_3->setText(QApplication::translate("Baza", "Marka", Q_NULLPTR));
        label_4->setText(QApplication::translate("Baza", "Model", Q_NULLPTR));
        label_5->setText(QApplication::translate("Baza", "Przek\304\205tna", Q_NULLPTR));
        label_6->setText(QApplication::translate("Baza", "Rozdzielczo\305\233\304\207", Q_NULLPTR));
        label_7->setText(QApplication::translate("Baza", "Procesor", Q_NULLPTR));
        label_8->setText(QApplication::translate("Baza", "Karta graficzna", Q_NULLPTR));
        label_9->setText(QApplication::translate("Baza", "Pami\304\231\304\207 RAM", Q_NULLPTR));
        label_10->setText(QApplication::translate("Baza", "Dysk twardy", Q_NULLPTR));
        label_11->setText(QApplication::translate("Baza", "Cena", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("Baza", "Informacje", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("Baza", "Drukuj", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Baza: public Ui_Baza {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAZA_H
