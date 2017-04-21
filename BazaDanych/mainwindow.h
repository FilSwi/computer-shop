#pragma once
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QtSql>
#include<QDebug>
#include<QFileInfo>
#include"baza.h"
#include "informacje.h"
#include "laptop.h"
//#include "listaoperacji.h"


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;

public:
    QSqlDatabase baza;
    bool polaczZbaza();
    void rozlaczZbaza();
};

#endif // MAINWINDOW_H
