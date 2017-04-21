#include "informacje.h"
#include "ui_informacje.h"

Informacje::Informacje(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Informacje)
{
    ui->setupUi(this);
}

Informacje::~Informacje()
{
    delete ui;
}
