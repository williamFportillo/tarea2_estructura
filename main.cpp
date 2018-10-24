#include <iostream>
#include "colaSubway.h"
using namespace std;
int main() {
    colaSubway c;
    int cantidad=0;
    string nombre;
    string subway;
    cout<<"Cantidad de subways a insertar: ";
    cin>>cantidad;
    for (int i = 0; i <cantidad ; ++i) {
        cout<<"Ingrese el subway: ";
        cin>>subway;
        c.agregar(subway);
    }
    system("cls");
    while(true) {
        cout << "--------Bienvenido A Subway---------\n";
        cout << "Ingrese su nombre: ";
        cin >> nombre;
        if(c.esVacia()) {
            cout << "Ya no hay subways\n";
            system("pause");
            return 0;
        }
        cout << "\n -----------Factura------------\n";
        cout << nombre << " usted compro: ";
        c.imprimir();
        c.eliminar();
        cout<<"\n";
        system("pause");
        system("cls");
    }
}