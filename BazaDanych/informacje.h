#pragma once
#ifndef INFORMACJE_H
#define INFORMACJE_H

#include <QDialog>
#include"baza.h"
#include"mainwindow.h"
#include "laptop.h"
//#include "listaoperacji.h"


namespace Ui {
class Informacje;
}

class Informacje : public QDialog
{
    Q_OBJECT

public:
    explicit Informacje(QWidget *parent = 0);
    ~Informacje();

private:
    Ui::Informacje *ui;
};

#endif // INFORMACJE_H
