//
// Created by WilliamPC on 23/10/2018.
//

#ifndef TAREA2EDI_COLASUBWAY_H
#define TAREA2EDI_COLASUBWAY_H

#include <iostream>
using namespace std;
struct subways{
    string n;
    subways * ant;
    subways(string nombre){
        n=nombre;
        ant = 0;
    }
};
class colaSubway {
private:
    subways * primero;
    subways * ultimo;
public:
    colaSubway();
    void agregar(string);
    bool eliminar();
    bool esVacia();
    void imprimir();
};




#endif //TAREA2EDI_COLASUBWAY_H
