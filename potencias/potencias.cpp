#include <stdlib.h> 
#include <iostream> 
#include <math.h>

using namespace std; 

main()
{ 
	int base,n,i;
	i = 1;
	cout<<"ingrese una base"<<endl;
	cin>>base;	
	cout<<"ingrese un exponente mayor o igual a 0"<<endl;
	cin>>n;
	while (n<0)
	{
		cout<<"ingrese un exponente mayor o igual a 0";
		cin>>n;
	}
	
	double resultado = pow(base,n);
	
	cout << base << " elevado a la " << n << " es igual a " << resultado << endl;
} 
