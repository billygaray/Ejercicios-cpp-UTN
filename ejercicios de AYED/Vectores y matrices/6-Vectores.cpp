//============================================================================
// Name        : 6-Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* 	Ingresar un valor entero N (<40) . Acontinuacion ingresar un conjunto VALOR de N elñementos.
 * Determinar e imprimir el valor maximo y la posision del mismo dentro del conjunto. Si el maximo
 *  no es unico imoprimir todass las posiciones enq ue se encuentra.
 *
 *	 	ejemplo: VALOR  5 9 8 4 8
 *
 *	 	ejemplo: VALOR  5 1 8 4 8
 *
 *	 	imprimo  pos 3  5  "se encuantra el"  8   "que es el maxmimo"
 *
 *
 */
//============================================================================

#include <iostream>
using namespace std;

int main() {


	bool pVez = true ;  // Este sera bandera
	cout <<"ingresaar un valor entero el caul sera el tamaño del vector (<30): "<<endl ;
	int tam ;
	cin >>tam ;

	// decalreo el vectror VALOR
	int vValor[tam] ;

	// cargo los datos de los vectores VALOR
	int i;
	for(i = 0 ; i<tam ; i++){

	cout <<"ingrerse un valor que se agregara en el Vector VALOR "<<endl ;
	cin >> vValor[i] ;
	}

	int max ; //declaro un valor maximo
	int vPosMax[tam] ; // sera la posicion maxima del vectr VALOR

	// primero busco el mayor de todos
	for(i= 0 ; i<tam  ; i++){
		if (pVez == true || vValor[i]>max ) {
			max = vValor[i];
		}
	pVez = false;
	}

	int k = 0;
	//busco el valor de VMAX en todo el vector VALOR
	for(i= 0 ; i<tam  ; i++){
		if( max == vValor[i]  ){
			vPosMax[k] = i;  // Todas las posicioes encontradas los guardo en vPOSMAX
		k++;
		}
	}


	// muestro el mayor y su posisiocn
	cout <<"el mayor sera: " << max << " y se encuantra en la posicion  "<<endl;
	for (i = 0 ; i<k ;i++){

	cout << vPosMax[i]<<endl;

	}


	return 0;
}
