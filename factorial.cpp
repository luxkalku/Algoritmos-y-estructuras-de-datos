#include <stdlib.h> 
#include <iostream> 

using namespace std; 


main(){ 
	int n,factorial;
	n = 0;
	while(n<=0){										
		cout<< "Ingrese un numero natural"<<endl;		//Con este bucle filtro los enteros negativos y al 0
		cin>> n;
		if(n==0)
			cout<< "El factorial de 0 es 1"<<endl;
	} 
	factorial = n;
	for(int i=1;i<n;i++){
		factorial *= i;
	}
	cout<< "El factorial de "<< n<< " es "<< factorial <<endl;
	goto main;
} 
