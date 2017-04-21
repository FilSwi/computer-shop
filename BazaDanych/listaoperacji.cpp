#include "listaoperacji.h"
#include<QMessageBox>
#include<QTableWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>

ListaOperacji::ListaOperacji()
{

}

void ListaOperacji::zapis(Ui::Baza *ui)
{
    MainWindow polaczenie;
    Laptop laptop;
    QString nowy;
    //QString idlaptopy,marka,model,przekatna,rozdzielczosc,procesor,grafika,ram,dysk,cena;
    laptop.setID(ui->lineEditID->text());
    laptop.setMarka(ui->lineEditMarka->text());
    laptop.setModel(ui->lineEditModel->text());
    laptop.setPrzekatna(ui->lineEditPrzek->text());
    laptop.setRozdzielczosc(ui->lineEditRozdz->text());
    laptop.setProcesor(ui->lineEditProc->text());
    laptop.setGrafika(ui->lineEditGraf->text());
    laptop.setRam(ui->lineEditRAM->text());
    laptop.setDysk(ui->lineEditDysk->text());
    laptop.setCena(ui->lineEditCena->text());

    polaczenie.polaczZbaza();
    QSqlQuery query;
    nowy.append("insert into laptopy (idlaptopy,marka,model,przekatna,rozdzielczosc,procesor,grafika,ram,dysk,cena) values (");
    nowy.append("'"+laptop.getID()+"',");
    nowy.append("'"+laptop.getMarka()+"',");
    nowy.append("'"+laptop.getModel()+"',");
    nowy.append("'"+laptop.getPrzekatna()+"',");
    nowy.append("'"+laptop.getRozdzielczosc()+"',");
    nowy.append("'"+laptop.getProcesor()+"',");
    nowy.append("'"+laptop.getGrafika()+"',");
    nowy.append("'"+laptop.getRam()+"',");
    nowy.append("'"+laptop.getDysk()+"',");
    nowy.append("'"+laptop.getCena()+"')");
    if(query.exec(nowy))
    {
        QMessageBox::about(0,"Zapis","Zapisano");
       // polaczenie.rozlaczZbaza();
    }
    else
    {
        QMessageBox::critical(0,"Błąd",query.lastError().text());
    }
}

void ListaOperacji::aktualizuj(Ui::Baza *ui)
{
    MainWindow polaczenie;
    Laptop laptop;
    //QString nowy;
    //QString idlaptopy,marka,model,przekatna,rozdzielczosc,procesor,grafika,ram,dysk,cena;
    laptop.setID(ui->lineEditID->text());
    laptop.setMarka(ui->lineEditMarka->text());
    laptop.setModel(ui->lineEditModel->text());
    laptop.setPrzekatna(ui->lineEditPrzek->text());
    laptop.setRozdzielczosc(ui->lineEditRozdz->text());
    laptop.setProcesor(ui->lineEditProc->text());
    laptop.setGrafika(ui->lineEditGraf->text());
    laptop.setRam(ui->lineEditRAM->text());
    laptop.setDysk(ui->lineEditDysk->text());
    laptop.setCena(ui->lineEditCena->text());

    polaczenie.polaczZbaza();
    QSqlQuery query;
    query.prepare("update laptopy set idlaptopy='"+laptop.getID()+"',marka='"+laptop.getMarka()+"',model='"+laptop.getModel()+"',przekatna='"+laptop.getPrzekatna()+"',rozdzielczosc='"+laptop.getRozdzielczosc()+"',procesor='"+laptop.getProcesor()+"',grafika='"+laptop.getGrafika()+"',ram='"+laptop.getRam()+"',dysk='"+laptop.getDysk()+"',cena='"+laptop.getCena()+"' where idlaptopy='"+laptop.getID()+"'");
    if(query.exec())
    {
        QMessageBox::about(0,"Aktualizacja","Zaktualizowano");
       // polaczenie.rozlaczZbaza();
    }
    else
    {
        QMessageBox::critical(0,"Błąd",query.lastError().text());
    }
}

void ListaOperacji::usun(Ui::Baza *ui)
{
    MainWindow polaczenie;
    Laptop laptop;
    //QString idlaptopy,marka,model,przekatna,rozdzielczosc,procesor,grafika,ram,dysk,cena;
    laptop.setID(ui->lineEditID->text());

    polaczenie.polaczZbaza();
    QSqlQuery query;
    query.prepare("Delete from laptopy where idlaptopy='"+laptop.getID()+"'");
    if(query.exec())
    {
        QMessageBox::about(0,"Usuwanie","Usunięto");
       // polaczenie.rozlaczZbaza();
    }
    else
    {
        QMessageBox::critical(0,"Błąd",query.lastError().text());
    }
}

void ListaOperacji::wczytaj(Ui::Baza *ui)
{
    MainWindow polaczenie;
    QSqlQueryModel *tabela=new QSqlQueryModel();
   // polaczenie.polaczZbaza();
    QSqlQuery *query=new QSqlQuery(polaczenie.baza);
    query->prepare("select * from laptopy");
    query->exec();
    tabela->setQuery(*query);

    ui->tableView->setModel(tabela);


   // polaczenie.rozlaczZbaza();
    qDebug()<<(tabela->rowCount());
}

void ListaOperacji::drukuj(Ui::Baza *ui)
{

    QPrinter printer;
    QPrintDialog printer_dialog( & printer );
    if( printer_dialog.exec() == QDialog::Accepted )
    {
        QPainter painter( & printer );

        QTableView * pTableView = new QTableView;
        pTableView->setModel( ui->tableView->model() );

        int width = 0;
        int height = 0;
        int columns = 10;
        int rows = 50;

       // painter.scale( 0.75, 0.75 );


        for( int i = 0; i < columns; ++i )
        {
            width += pTableView->columnWidth( i );
        }

        for( int i = 0; i < rows; ++i )
        {
            height += pTableView->rowHeight( i );

        }

        width += 100;
        height += 100;

        pTableView->setFixedSize( width, height );
        pTableView->setHorizontalScrollBarPolicy( Qt::ScrollBarAlwaysOff );
        pTableView->setVerticalScrollBarPolicy( Qt::ScrollBarAlwaysOff );

        pTableView->render( & painter );
    }
}
