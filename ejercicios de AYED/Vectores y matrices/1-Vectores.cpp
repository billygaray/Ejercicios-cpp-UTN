//============================================================================
// Name        : 1-Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* 
 * Ingresar un valor N (<25). Generar un arreglo  de N componentes en el cual las mismas contengasn
  los primoes numeros naturales pares e imprimirlos . 
 */
//============================================================================

#include <iostream>  
using namespace std;

int main(){
	int numeros[25];
	int n;
	int j = 0;
	cout << "ingrese el tamaño que tendra el vector menor a 25 "<< endl;
	cin >> n;
	int i;
			
		for(i = 0 ; i<n ; i++)  // Aqui agregro valores del array 
		{
			numeros[i] = j;
			j = j+2;
		}
		
	
		
		for (i=0 ; i<n ; i++){  // Este recorre y muestra todos los valores del array 
			cout << numeros[i] << endl;
		}   
		
		
	
	return 0;
}
