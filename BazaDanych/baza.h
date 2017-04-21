#pragma once
#ifndef BAZA_H
#define BAZA_H

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
#include"mainwindow.h"
#include "informacje.h"
#include "laptop.h"
#include "listaoperacji.h"



namespace Ui {
class Baza;
}

class Baza : public QDialog
{
    Q_OBJECT

public:

    explicit Baza(QWidget *parent = 0);
    //ListaOperacji operacje;
    ~Baza();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();


    void on_tableView_activated(const QModelIndex &index);

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

private:
    Ui::Baza *ui;
};

#endif // BAZA_H
