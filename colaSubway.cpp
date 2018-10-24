//
// Created by WilliamPC on 23/10/2018.
//

#include "colaSubway.h"
colaSubway::colaSubway():primero(0),ultimo(0) {}

bool colaSubway::esVacia() {
    return primero==0;
}

void colaSubway::agregar(string nombre) {
    subways * nuevo= new subways(nombre);
    if(esVacia()){
        primero=nuevo;
        ultimo=nuevo;
    }else{
        ultimo->ant=nuevo;
        ultimo=nuevo;
    }
}

void colaSubway::imprimir() {
    subways * tmp=primero;
        cout<<tmp->n;
}

bool colaSubway::eliminar() {
    subways * actual=primero;
    if(!esVacia()){
        primero = actual->ant;
        delete actual;
        return true;
    }
    return false;
}