#include <stdlib.h> 
#include <iostream> 

using namespace std; 

int main() 
	{
    float pesos, dolares, euros, suma, centro, comedor, gastos;

    cout << "Ingresar donacion en pesos: ";
    cin >> pesos;
    cout << "Ingresar donacion en dolares: ";
    cin >> dolares;
    cout << "Ingresar donacion en euros: ";
    cin >> euros;

    //CAMBIAMOS TODOS LOS VALORES A EUROS

    euros = euros;
    pesos = pesos*0.059578;
    dolares = dolares/0.91892;

    //AHORA LOS SUMAMOS

    suma = euros + dolares + pesos;

    cout << "\El total de la donacion en euros es: " << suma<<endl;

    //Y AHORA REPARTIMOS
	centro = suma * 0.60;
	comedor = suma * 0.35;
	gastos = suma * 0.05;
    cout<< "Al centro le corresponden: "<< centro <<" euros"<<endl;
    cout<< "Al comedor le corresponden: "<< comedor <<" euros"<<endl;
    cout<< "Los gastos administrativos fueron de: "<< gastos <<" euros"<<endl;
	return 0;
}
