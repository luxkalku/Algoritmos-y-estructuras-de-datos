#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
  const float PI = 3.141592;
  float area,radio,perimetro;
  
  cout << "Introduzca el radio del circulo: "<<endl;
  cin >> radio;
  area = PI * radio * radio;
  perimetro = 2 * PI * radio; 
  cout << "El area del circulola es: " << area << " y su perimetro es "<< perimetro<<endl;
  system("PAUSE");    
  return 0;
}
