#include<iostream>
#include<stdlib.h>
#include <iomanip>

using namespace std;

int main() 
{
	int n;
	char letra;
	while(n<1 || n>26)
	{
		cout<< "Ingrese el numero correspondiente a la posicion de la letra del alfabeto"<<endl;
		cin>> n;
	}
	letra += 'A' + n - 1;
	cout<< "La letra que corresponde a su numero es :"<< letra;
}
