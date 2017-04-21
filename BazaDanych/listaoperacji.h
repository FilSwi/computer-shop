#pragma once
#ifndef LISTAOPERACJI_H
#define LISTAOPERACJI_H
#include"baza.h"
#include "informacje.h"
#include "laptop.h"
#include"mainwindow.h"
#include <QString>

#include "ui_baza.h"
#include<QDialog>
#include<QtSql>
#include<QDebug>
#include<QFile>
#include<QFileDialog>
#include<QFileInfo>
#include <QtPrintSupport/QPrintDialog>
#ifndef QT_NO_PRINTER
#include <QtPrintSupport/QPrinter>
#endif
#include <QPainter>
#include <QtPrintSupport/QPrintEngine>


class ListaOperacji
{
public:
    ListaOperacji();
    void zapis(Ui::Baza *ui);
    void aktualizuj(Ui::Baza *ui);
    void usun(Ui::Baza *ui);
    void wczytaj(Ui::Baza *ui);
    void drukuj(Ui::Baza *ui);
};

#endif // LISTAOPERACJI_H
