#include<iostream>
#include<stdlib.h>

using namespace std;

int main ()
{
 int x, y, x1, y1, x2, y2;
 bool x_dentro = false, y_dentro = false;

 cout << "Dame 4 puntos (x1, y1, x2, y2): " << endl;
 cin >> x1 >> y1 >> x2 >> y2;
 cout << "Dame un punto: " << endl;
 cin >> x >> y;

 if (x1 < x2)
 {
  if (x >= x1 && x <= x2)
  x_dentro = true;					
 }
 else
  if(x <= x1 && x>= x2)
  x_dentro = true;

// x tiene que estar entre x1 y x2, indiferentemente de cual sea mayor. Esto es condición de pertenencia
 
 if (y1 < y2)
 {
  if (y >= y1 && y <= y2)
  y_dentro = true;
 }
 else
  if (y < y1 && y > y2)
  y_dentro = true;

// lo mismo para y

 if (x_dentro && y_dentro)
 
 // si ambos casos se dan, lo indico, si no se dan, también
 
  cout << "El punto esta dentro del rectangulo" << endl;
 else
  cout << "El punto NO esta dentro del rectangulo" << endl;
 return 0;
}
