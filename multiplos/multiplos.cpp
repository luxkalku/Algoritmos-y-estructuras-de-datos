#include <stdlib.h> 
#include <iostream> 

using namespace std; 

int main() {
	int n,i,N;
	i = 2;
	cout<< "por favor, ingrese un n�mero"<<endl;
	cin>> n;
	cout<< "los 50 primeros m�ltiplos de "<< n << " son"<< endl;
		while(i<52)
		{
			N = n*i;
			cout<< N << endl;
			i++;
		}	
	return 0;
}
