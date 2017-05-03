#include<iostream>
#include <stdlib.h>
using namespace std;

int main()
{

long long i, j, contador; //estas variables van a manejar numeros grandes

int n=0;
long perfecto[4];
i=1;
int maximos=0;

while(true)     //bucle infinito
  {
  
   contador=0;
   i++;
   for(j=1; j<i-1; j++)         //Voy a ver sus diviores
    {
     if(i%j==0)
	 contador=contador+j;
    }
   if(contador==i)  //si la suma de sus divisores es igual al numero
     {
      perfecto[n]=i;  //lo añadimos a la lista de perfectos
      n++;
      maximos++;
     }
   if(maximos==4) break; //Tengo que forzar el corte
  }

cout << "  Calcula los cuatro primeros numero perfectos" << endl;



for(n=0; n<4; n++) cout << n+1<< ")   " << perfecto[n] << endl; //mostramos los resultados en pantalla.

cout << endl; 

system("PAUSE");

return 0;
}
