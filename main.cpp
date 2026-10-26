#include <iostream>
#include <limits>
#include <iomanip>
using namespace std;

int main() {
    cout<<fixed<<setprecision(2);
int opcion;
double precio;
int cantidad;
double subtotal;
double descuento;
double Montodescuento;
double iva;
double total;
double pago;
double cambio;
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
         cout<<"----------RECIBO DE VENTA----------"<<endl;
         cout<<"Subtotal de la venta: Q"<<subtotal<<endl;
         if (subtotal<100){
            descuento=0;
         }
         else if (subtotal<500)
         {
            descuento=0.05;
         }
         else{
            descuento=0.10;

         }
         Montodescuento=subtotal*descuento;
         cout<<"Descuento aplicado: Q"<<Montodescuento<<endl;
         iva=(subtotal-Montodescuento)*0.12;
         cout<<"IVA (12%): Q"<< iva<<endl;
         total=subtotal-Montodescuento+iva;
         cout<<"Total a pagar: Q"<<total<<endl;
         cout<<"Ingrese el monto recibido: Q";
         cin>>pago;
         while (cin.fail() || pago<total)
         {
             if (cin.fail())
            {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }
            cout<<"Error: el monto recibido es invalido o insuficiente."<<endl;
            cout<<"Ingrese nuevamente el pago: Q";
            cin>> pago;
         }
         cambio=pago-total;
         cout<<"Cambio del cliente: Q"<<cambio<<endl;
         cout<<"----------GRACIAN POR SU COMPRA----------"<<endl;
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