#include <iostream>
#include "CuentaCorriente.h"
#include "Problemas.h"
#include "BuscadorTexto.h"

using namespace std;

int main(){
    cout<<"__________________________________________"<<endl;
    cout<<"Menu"<<endl;
    cout<<"1. Cuenta corriente"<<endl;
    cout<<"2. Archivo"<<endl;
    cout<<"3. Buscador"<<endl;
    cout<<"4. Codificador"<<endl;
    cout<<"5. Pelicula"<<endl;
    cout<<"Por favor ingrese la opcion"<<endl;
    cout<<"__________________________________________"<<endl;


    int opcion;
    cin>>opcion;
    switch (opcion) {
        case 1:
            problema1();
            break;
        case 3:
            problema3();
            break;
         case 4:
            problema4();
             break;
    default:
         cout<<"Opcion no disponible"<<endl;
        break;
    }
    return 0;
}
