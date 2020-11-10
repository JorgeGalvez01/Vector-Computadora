#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include <iostream>
#include <iomanip>

using namespace std;

class Computadora
{
private:
    string sistemaOperativo;
    string nombreDelEquipo;
    int ram;
    int almacenamiento;

public:
    Computadora();
    Computadora(const string &sistemaOperativo, const string &nombreDelEquipo, int ram, int almacenamiento);

    void setSistemaOperativo(const string &valor);
    string getSistemaOperativo();

    void setNombreDelEquipo(const string &valor);
    string getNombreDelEquipo();

    void setRam(int valor);
    int getRam();

    void setAlmacenamiento(int valor);
    int getAlmacenamiento();

    friend ostream& operator <<(ostream &out, Computadora const &compu)
    {
        out << left;
        out << setw (12) << compu.sistemaOperativo;
        out << setw (15) << compu.nombreDelEquipo;
        out << setw (6) << compu.ram;
        out << setw (14) << compu.almacenamiento;
        out << endl;

        return out;
    }

    friend istream& operator >>(istream &in, Computadora &compu)
    {
        cout << "Sistema operativo: ";
        getline(cin, compu.sistemaOperativo);

        cout << "Nombre del equipo: ";
        getline (cin, compu.nombreDelEquipo);

        cout << "Ram: ";
        cin >> compu.ram;

        cout << "Almacenamiento: " ;
        cin >> compu.almacenamiento;

        return in;
    }

    bool operator==(const Computadora& c)
    {
        return sistemaOperativo == c.sistemaOperativo;
    }

    bool operator==(const Computadora& c) const 
    {
        return sistemaOperativo == c.sistemaOperativo;
    }

    bool operator<(const Computadora& compu) 
    {
        return nombreDelEquipo < compu.nombreDelEquipo;
    }

    bool operator<(const Computadora& compu) const
    {
        return sistemaOperativo < compu.sistemaOperativo;
    }
};


#endif