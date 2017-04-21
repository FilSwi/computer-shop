/********************************************************************************
** Form generated from reading UI file 'informacje.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMACJE_H
#define UI_INFORMACJE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_Informacje
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *Informacje)
    {
        if (Informacje->objectName().isEmpty())
            Informacje->setObjectName(QStringLiteral("Informacje"));
        Informacje->resize(378, 261);
        textEdit = new QTextEdit(Informacje);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 20, 341, 211));
        textEdit->setReadOnly(true);

        retranslateUi(Informacje);

        QMetaObject::connectSlotsByName(Informacje);
    } // setupUi

    void retranslateUi(QDialog *Informacje)
    {
        Informacje->setWindowTitle(QApplication::translate("Informacje", "Informacje", Q_NULLPTR));
        textEdit->setHtml(QApplication::translate("Informacje", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Program BazaDanych</p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Program umo\305\274liwia operacje na bazach danych takie jak:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-wczytywanie danych</p>\n"
""
                        "<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-zapis nowych danych</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-edycja istniej\304\205cych danych</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">-usuwanie danych</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Cechuje si\304\231 wygodnym i \305\202atwym w obs\305\202udze interfejsem.</p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Autor: Filip \305\232wita</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px"
                        "; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Student II roku informatyki na Politechnice Rzeszowskiej</p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Informacje: public Ui_Informacje {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMACJE_H
