#include <stdlib.h> 
#include <iostream> 

using namespace std; 


    void ordenar(int arreglo[10]){ 				
        int aux; 									//Auxiliar para guardar un número si éste es mayor que su sucesor en el vector
         for(int i=0;i<10;i++) 						
                for(int j=0;j<9;j++) 			
                    if(arreglo[j]>
					arreglo[j+1]){	//Un número en el vector es menor que el de su derecha?
                        aux=arreglo[j]; 			
                        arreglo[j]=arreglo[j+1]; 
                        arreglo[j+1]=aux;} 			//Entnces los intercambio

                 for(int i=0;i<9;i++) 
                    cout<<arreglo[i]<<endl; 		//Los muestro a todos
                        } 


        main(){ 
		int n;
        int arreglo[10]; 
        for(int i=0;i<10;i++){ 
            cout<<"Ingresa el numero "<<i+1<<": "; 
            cin>>n; 
            arreglo[i]=n; 							//Hasta acá lo que hice fue cargar el vector
            } 
            cout<<endl<<"Numeros ordenados: "<<endl; 
            ordenar(arreglo); 
            system("pause"); 
        } 
