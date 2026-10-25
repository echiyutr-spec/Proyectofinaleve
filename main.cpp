#include <iostream>
using namespace std;

int main() {
int opcion;
do{
    cout<<"SISTEMA DE CAJA"<< endl;
    cout<<"1. Registrar venta"<< endl;
    cout<<"2. Ver resumen parcial del dia"<< endl;
    cout<<"3. Cerrar caja y salir"<< endl;
    cout<<"Seleccione una opcion"<< endl;
    cin>> opcion;
    switch (opcion){
        case 1:
        cout<<"Registrar venta"<< endl;
        break;

        case 2:
        cout<<"Resumen parcial del dia"<<endl;
        break;

        case 3:
        cout<<"Cerrando caja"<<endl;
        break;

        default:
        cout<<"Opcion invalida"<<endl;
        break;
    }
} while (opcion !=3);

   return 0;

}