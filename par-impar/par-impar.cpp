#include <stdlib.h> 
#include <iostream> 

using namespace std; 

int pedir_numero()
{
	int m;
	do
	{
		cout<<"ingrese un n�mero mayor o igual a 0"<<endl;
		cin>> m;
	} while(m<0);
return m;
}

int main() {
	int n,pares,impares;
	n = pedir_numero();
	while (n>0)
	{
		if(n%2==1)
			impares++;
		else
			pares++;
		n = pedir_numero();
	}
	pares--;
	cout<< "Cantidad de n�meros pares = "<< pares << " y cantidad de n�meros impares "<< impares<<endl;
	
	return 0;
}
