#include <iostream>
#include "laboratorio.h"

using namespace std;

int main()
{
    Laboratorio l;
    int opcion;

    while (true)
    {
        cout << "1) Agregar computadora" << endl;
        cout << "2) Mostrar" << endl;
        cout << "3) Respaldar" << endl;
        cout << "4) Recuperar" << endl;
        cout << "5) Insertar" << endl;
        cout << "6) Inicializar" << endl;
        cout << "7) Eliminar" << endl;
        cout << "8) Ordenar" << endl;
        cout << "9) Buscar" << endl;
        cout << "0) Salir" << endl;

        cin >> opcion;
        cin.sync();

        if (opcion == 1)
        {
            Computadora compu;
            cin >> compu;

            l.agregarComputadora(compu);
            cin.ignore();
        }
        else if (opcion == 2)
        {
            l.mostrar();
        }
        else if (opcion == 3)
        {
            l.respaldar();
        }
        else if (opcion == 4)
        {
            l.recuperar();
        }
        else if (opcion == 5)
        {
            Computadora compu;
            cin >> compu;

            size_t pos;
            cout << "Posicion: ";
            cin >> pos;

            if (pos >= l.size())
            {
                cout << "Posicion no valida" << endl;
            }
            else 
            {
                l.insertar(compu, pos);
            }
        }
        else if (opcion == 6)
        {
            Computadora compu;
            cin >> compu;

            size_t n;
            cout << "n: ";
            cin >> n; cin.ignore();

            l.inicializar(compu, n);
        }
        else if (opcion == 7)
        {
            size_t pos;
            cout << "Posicion: ";
            cin >> pos;

            if (pos >= l.size())
            {
                cout << "Posicion no valida" << endl;
            }
            else 
            {
                l.eliminar(pos);
            }
        }
        else if (opcion == 8)
        {
            l.ordenar();
        }
        else if (opcion == 9)
        {
            Computadora compu;
            cin >> compu;

            Computadora *ptr = l.buscar(compu);
            if (ptr == nullptr)
            {
                cout << "No encontrado" << endl;
            }
            else
            {
                cout << *ptr << endl;
            }
        }
        else if (opcion == 0)
        {
            break;
        }
        
        
        
        
    }


    return 0;
}