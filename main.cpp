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
} while (opcion !=3);

   return 0;

}