#ifndef LABORATORIO_H
#define LABORATORIO_H

#include "computadora.h"
#include <vector>

class Laboratorio
{
private:
    vector <Computadora> computadoras;
    
public:
    Laboratorio();
    void agregarComputadora(const Computadora &compu);
    void mostrar();

    void respaldar_tabla();
    void respaldar();
    void recuperar();

    void insertar(const Computadora &compu, size_t pos);
    size_t size();
    void inicializar(const Computadora &compu, size_t n);
    void eliminar(size_t pos);
    void ordenar();
    Computadora* buscar(const Computadora &compu);

    friend Laboratorio& operator <<(Laboratorio &l, const Computadora &compu)
    {
        l.agregarComputadora(compu);
        return l;
    }
};
#endif