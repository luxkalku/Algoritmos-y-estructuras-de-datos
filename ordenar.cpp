#include <stdlib.h> 
#include <iostream> 

using namespace std; 


main(){ 
	int n,factorial;
	n = 0;
	while(n<=0){										//Con este bucle filtro los enteros negativos y al 0
		cout<< "Ingrese un numero natural"<<endl;
		cin>> n;
	} 
	for (int i = 1;i==n;i++){
		factorial = n*(n-i);
	}
	cout<< "El factorial de "<< n<< "es "<< factorial <<endl;
} 
