#include "laboratorio.h"
#include <fstream>
#include <algorithm>

Laboratorio::Laboratorio(){}

void Laboratorio::agregarComputadora(const Computadora &compu)
{
   computadoras.push_back(compu);
}

void Laboratorio::mostrar()
{
    cout << left;
    cout << setw(12) << "OS";
    cout << setw(15) << "Equipo";
    cout << setw(6) << "Ram";
    cout << setw(14) << "Almacenamiento";

    cout << endl;

    for (size_t i = 0; i < computadoras.size(); i++)
    {
        Computadora &compu  = computadoras[i];
        cout << compu;
        /*cout <<"Sistema operativo: " << compu.getSistemaOperativo() << endl; 
        cout <<"Nombre del equipo: " << compu.getNombreDelEquipo() << endl; 
        cout <<"Ram: " << compu.getRam() << endl; 
        cout <<"Almacenamiento: " << compu.getAlmacenamiento() << endl;
        cout << endl;*/
    }
    
}

void Laboratorio::respaldar_tabla()
{
    ofstream archivo("computadoras_tabla.txt");
    if (archivo.is_open())
    {
        archivo << left;
        archivo << setw(12) << "OS";
        archivo << setw(15) << "Equipo";
        archivo << setw(6) << "Ram";
        archivo << setw(14) << "Almacenamiento";
        archivo << endl;

        for (size_t i = 0; i < computadoras.size(); i++)
    {
        Computadora &compu  = computadoras[i];
        archivo << compu;
    }

    }
    archivo.close();
}

void Laboratorio::respaldar()
{
    ofstream archivo("computadoras.txt");
    if (archivo.is_open()){
        for (size_t i = 0; i < computadoras.size(); i++)
        {
            Computadora &compu = computadoras[i];
            archivo << compu.getSistemaOperativo() << endl;
            archivo << compu.getNombreDelEquipo() << endl;
            archivo << compu.getRam() << endl;
            archivo << compu.getAlmacenamiento() << endl;
        }
    }
    archivo.close();
}

void Laboratorio::recuperar()
{
    ifstream archivo("computadoras.txt");
    if (archivo.is_open())
    {
        string temp;
        int ram;
        int almacenamiento;
        Computadora c;

        while (true)
        {
            getline(archivo, temp);
            if (archivo.eof())
            break;
            c.setSistemaOperativo(temp);

            getline(archivo, temp);
            c.setNombreDelEquipo(temp);

            getline(archivo, temp);
            ram = stoi(temp);
            c.setRam(ram);

            getline(archivo, temp);
            almacenamiento = stoi(temp);
            c.setAlmacenamiento(almacenamiento); 

            agregarComputadora(c);
        }
    }
    archivo.close();
}

void Laboratorio::insertar(const Computadora &compu, size_t pos)
{
    computadoras.insert(computadoras.begin() + pos, compu);
}

size_t Laboratorio::size()
{
    return computadoras.size();
}

void Laboratorio::inicializar(const Computadora &compu, size_t n)
{
    computadoras = vector <Computadora> (n, compu);
}

void Laboratorio::eliminar(size_t pos)
{
    computadoras.erase(computadoras.begin() + pos);
}

void Laboratorio::ordenar()
{
    sort(computadoras.begin(), computadoras.end());
}

Computadora* Laboratorio::buscar(const Computadora &compu)
{
    // vector <Computadora>::iterator
    auto it = find(computadoras.begin(), computadoras.end(), compu);

    if (it == computadoras.end())
    {
        return nullptr;
    }
    else
    {
        return &(*it);
    }
    

}