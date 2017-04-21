#include "baza.h"
#include "ui_baza.h"
#include<QMessageBox>
#include<QTableWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>


Baza::Baza(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Baza)
{
    ui->setupUi(this);
    MainWindow polaczenie;
    //polaczenie.polaczZbaza();
    if(!polaczenie.polaczZbaza())
        ui->label->setText("Brak połączenia z bazą");
    else
        ui->label->setText("Połączono z bazą");
}

Baza::~Baza()
{
    delete ui;
    MainWindow polaczenie;
    polaczenie.rozlaczZbaza();
}


void Baza::on_pushButton_clicked()
{
    ListaOperacji operacje;
    operacje.zapis(ui);
}

void Baza::on_pushButton_2_clicked()
{
    ListaOperacji operacje;
    operacje.aktualizuj(ui);

}

void Baza::on_pushButton_3_clicked()
{
    ListaOperacji operacje;

    operacje.usun(ui);
}

void Baza::on_pushButton_4_clicked()
{
    ListaOperacji operacje;
    operacje.wczytaj(ui);

}



/*
void Baza::on_comboBox_currentIndexChanged(const QString &arg1)
{

    QString id=ui->comboBox->currentText();
    MainWindow polaczenie4;

    polaczenie4.polaczZbaza();
    QSqlQuery query4;
    query4.prepare("select * from laptopy where idlaptopy='"+id+"'");

    if(query4.exec())
    {
        while(query4.next())
                       {
                           ui->lineEditID->setText(query4.value(0).toString());
                           ui->lineEditMarka->setText(query4.value(1).toString());
                           ui->lineEditModel->setText(query4.value(2).toString());
                           ui->lineEditPrzek->setText(query4.value(3).toString());
                           ui->lineEditRozdz->setText(query4.value(4).toString());
                           ui->lineEditProc->setText(query4.value(5).toString());
                           ui->lineEditGraf->setText(query4.value(6).toString());
                           ui->lineEditRAM->setText(query4.value(7).toString());
                           ui->lineEditDysk->setText(query4.value(8).toString());
                           ui->lineEditCena->setText(query4.value(9).toString());

                       }
        polaczenie4.rozlaczZbaza();
    }
    else
    {
        QMessageBox::critical(this,tr("Błąd"),query4.lastError().text());
    }




}
*/


void Baza::on_tableView_activated(const QModelIndex &index)
{
    QString wartosc=ui->tableView->model()->data(index).toString();
    MainWindow polaczenie;

    QSqlQuery query;
    query.prepare("select * from laptopy where idlaptopy='"+wartosc+"'");

    if(query.exec())
    {
        while(query.next())
                       {
                           ui->lineEditID->setText(query.value(0).toString());
                           ui->lineEditMarka->setText(query.value(1).toString());
                           ui->lineEditModel->setText(query.value(2).toString());
                           ui->lineEditPrzek->setText(query.value(3).toString());
                           ui->lineEditRozdz->setText(query.value(4).toString());
                           ui->lineEditProc->setText(query.value(5).toString());
                           ui->lineEditGraf->setText(query.value(6).toString());
                           ui->lineEditRAM->setText(query.value(7).toString());
                           ui->lineEditDysk->setText(query.value(8).toString());
                           ui->lineEditCena->setText(query.value(9).toString());

                       }
        polaczenie.rozlaczZbaza();
    }
    else
    {
        QMessageBox::critical(this,tr("Błąd"),query.lastError().text());
    }
}

void Baza::on_pushButton_5_clicked()
{
    Informacje informacja;
    informacja.setModal(true);
    informacja.exec();
}

void Baza::on_pushButton_6_clicked()
{
    ListaOperacji operacje;
    operacje.drukuj(ui);
}
