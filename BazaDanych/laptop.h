#pragma once
#ifndef LAPTOP_H
#define LAPTOP_H
#include <QString>



class Laptop
{
public:
    Laptop();
    void setID(QString idlaptopy);
    void setMarka(QString marka);
    void setModel(QString model);
    void setPrzekatna(QString przekatna);
    void setRozdzielczosc(QString rozdzielczosc);
    void setProcesor(QString procesor);
    void setGrafika(QString grafika);
    void setRam(QString ram);
    void setDysk(QString dysk);
    void setCena(QString cena);
    QString getID();
    QString getMarka();
    QString getModel();
    QString getPrzekatna();
    QString getRozdzielczosc();
    QString getProcesor();
    QString getGrafika();
    QString getRam();
    QString getDysk();
    QString getCena();



private:
    QString idlaptopy,marka,model,przekatna,rozdzielczosc,procesor,grafika,ram,dysk,cena;

};

#endif // LAPTOP_H
