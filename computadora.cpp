#include "computadora.h"

#include <iostream>
using namespace std;

Computadora::Computadora(){}

Computadora::Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int almacenamiento)
{
    this->sistemaOperativo = sistemaOperativo;
    this->nombreDelEquipo = nombreDelEquipo;
    this->ram = ram;
    this->almacenamiento = almacenamiento;
}

void Computadora::setSistemaOperativo(const string &valor)
{
    sistemaOperativo = valor;
}
string Computadora::getSistemaOperativo()
{
    return sistemaOperativo;
}

void Computadora::setNombreDelEquipo(const string &valor)
{
    nombreDelEquipo = valor;
}
string Computadora::getNombreDelEquipo()
{
    return nombreDelEquipo;
}

void Computadora::setRam(int valor)
{
    ram = valor;
}
int Computadora::getRam()
{
    return ram;
}

void Computadora::setAlmacenamiento(int valor)
{
    almacenamiento = valor;
}
int Computadora::getAlmacenamiento()
{
    return almacenamiento;
}