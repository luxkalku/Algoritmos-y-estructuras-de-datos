#include <stdlib.h> 
#include <iostream> 
#include <string>
using namespace std; 


int main(){ 
	int decimal,binario;
	decimal = 0;
	while (decimal<0){ 
		cout<<"Ingresar un numero positivo o igual a 0"<<endl;
		cin>> decimal;
	
	}
	while(decimal/2 >=0){ 
		binario = decimal%2;
		decimal /=2;
		cout<< binario;
	}
	cout<< decimal;
}
