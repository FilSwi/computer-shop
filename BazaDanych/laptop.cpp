#include "laptop.h"
#include <QString>

Laptop::Laptop()
{

}

void Laptop::setID(QString idlaptopy)
{
    this->idlaptopy=idlaptopy;
}

void Laptop::setMarka(QString marka)
{
    this->marka=marka;
}

void Laptop::setModel(QString model)
{
    this->model=model;
}

void Laptop::setPrzekatna(QString przekatna)
{
    this->przekatna=przekatna;
}

void Laptop::setRozdzielczosc(QString rozdzielczosc)
{
    this->rozdzielczosc=rozdzielczosc;
}

void Laptop::setProcesor(QString procesor)
{
    this->procesor=procesor;
}

void Laptop::setGrafika(QString grafika)
{
    this->grafika=grafika;
}

void Laptop::setRam(QString ram)
{
    this->ram=ram;
}

void Laptop::setDysk(QString dysk)
{
    this->dysk=dysk;
}

void Laptop::setCena(QString cena)
{
    this->cena=cena;
}

QString Laptop::getID()
{
    return this->idlaptopy;
}

QString Laptop::getMarka()
{
    return this->marka;
}

QString Laptop::getModel()
{
    return this->model;
}

QString Laptop::getPrzekatna()
{
    return this->przekatna;
}

QString Laptop::getRozdzielczosc()
{
    return this->rozdzielczosc;
}

QString Laptop::getProcesor()
{
    return this->procesor;
}

QString Laptop::getGrafika()
{
    return this->grafika;
}

QString Laptop::getRam()
{
    return this->ram;
}

QString Laptop::getDysk()
{
    return this->dysk;
}

QString Laptop::getCena()
{
    return this->cena;
}
