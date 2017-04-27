#include <stdlib.h> 
#include <iostream> 

using namespace std; 

int main() 
{
	int R,N,resultado,i;
	i=0;
	cout<<"ingrese el número que comienza la sucesion"<<endl;
	cin>> R;
	do
	{
		cout<<"Ingrese la cantidad de numeros consecutivos que quiere generar"<<endl;
		cin>> N;
	} while (N<0);
	resultado = R;
	cout<<"los "<< N <<" numeros consecutivos de "<< R<<" son"<<endl;
	while(i<N)
	{	
		resultado++;
		cout<<resultado<<endl;
		i++;
	}
	return 0;
}
