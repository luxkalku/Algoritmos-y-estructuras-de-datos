#include <iostream>
#include <cmath>

using namespace std;

int main()
{
        float a,b,c,d,x,y;

        cout << "ingrese a: ";
        cin >> a  ;

        cout << "ingrese b: ";
        cin >> b ;

        cout << "ingrese c: ";
        cin >> c ;


        if (a == 0)				//No es cuadr�tica
                cout << "no cumple la condicion. ";

        else 
        {
                d = (b*b) - (4*a*c);		//argumento de la ra�z 

        if ( d == 0)
        {
                x =  (-b/2*a);
                y = x;
        }
        else
        
                if (d>0)
                {
                        x = (-b) + sqrt(d)/(2*a); //sqrt calcula ra�ces de n�meros positivos

                        y = (-b) - sqrt(d)/(2*a);

                        cout <<x <<endl<< y;
                }
                else
                cout << "es raiz imaginaria";

      }
}
