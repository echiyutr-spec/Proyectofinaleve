#include <iostream>
#include <limits>
using namespace std;

int main() {
int opcion;
double precio;
int cantidad;
double subtotal;
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
        subtotal =0;
        do{
        cout<<"Ingrese el precio del producto (0 para terminar):";
        cin>>precio;
        while (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout<<"Error: debe ingresar un numero."<<endl;
            cout<<"Ingrese nuevamente el precio:";
            cin>>precio;
        }
        
        while (precio<0)
        {
           cout<<"Error: el precio no puede ser negativo."<< endl;
           cout<<"Ingrese nuevamente el precio:";
           cin>> precio;
        }
        if (precio !=0){
        cout<<"Ingrese la cantidad del producto:";
        cin>>cantidad;
         if(!cin.fail()&& cin.peek()!='\n'){
                cin.setstate(ios::failbit);
            }
        while (cin.fail() || cantidad<1 || cantidad>100)
        {
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            
            cout<<"Error: la cantidad debe estar entre 1 y 100."<<endl;
            cout<<"Ingrese nuevamente la cantidad:";
            cin>>cantidad;
            if(!cin.fail()&& cin.peek()!='\n'){
                cin.setstate(ios::failbit);
            }
        }
        
        subtotal= subtotal + (precio*cantidad);
        }
        } while (precio !=0); 
         cout<<"Subtotal de la venta: Q"<<subtotal<<endl;
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