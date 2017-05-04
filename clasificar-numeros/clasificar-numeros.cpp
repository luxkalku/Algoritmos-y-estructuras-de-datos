#include<iostream>
#include <stdlib.h>
using namespace std;

int main() 
{
	int n=0,cant_ceros=0,cant_positivos=0,cant_negativos=0;
		for(int i = 0; i < 10; i++)
		{
		cout<<"ingrese un numero"<<endl;
		cin>> n;
		
			if(n==0)
				cant_ceros++;
			else
				if(n>0)
					cant_positivos++;
				else
					cant_negativos++;
		}
		cout<< "ceros: "<< cant_ceros<<endl<< "positivos: "<< cant_positivos<<endl<< "negativos: "<< cant_negativos;
	return 0;
}
