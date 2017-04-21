#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //polaczZbaza();
}

MainWindow::~MainWindow()
{
    delete ui;
    //rozlaczZbaza();
}

bool MainWindow::polaczZbaza()
{
    this->baza=QSqlDatabase::addDatabase("QMYSQL");
    this->baza.setHostName("127.0.0.1");
    this->baza.setPort(3306);
    this->baza.setDatabaseName("sklep");
    this->baza.setUserName("root");
    this->baza.setPassword("F55mysql");
    if(!baza.open())
    {
        ui->label->setText("Brak połączenia z bazą");
        return false;
    }
    else
    {
        ui->label->setText("Połączono z bazą");
        return true;
    }
}

void MainWindow::rozlaczZbaza()
{
    this->baza.close();
}

void MainWindow::on_pushButton_clicked()
{
    QString login,haslo;
    login=ui->lineEditLogin->text();
    haslo=ui->lineEditHaslo->text();
    if(login=="root"&&haslo=="F55mysql"){
        this->hide();
        Baza baza;
        baza.setModal(true);
        baza.exec();
    }
    else
    {
        ui->label_4->setText("Błędny login i/lub hasło");
    }
}
