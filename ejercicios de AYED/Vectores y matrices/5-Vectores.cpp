//============================================================================
// Name        : 5-Vectores.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/*
	Ingresar un valor entero N (<30). A continuacioon ingresar un conjuto UNO y luego
	otro conjutno DOS , ambos de N componentes .Generar e imprimir otro conjuto TRES
	intercalando los valores de posicion impar de DOS y los valores de posision par de UNO.

 	 ejemplo:  uno  1 2 3 4  los de posisioc par son 1 3

 	 	 	   dos  5 6 7 8	 los de posicion impar son 6 8

 	 	 	   tres 1 6 3 8


 */

//============================================================================

#include<iostream>

using namespace std ;

int main (){

	cout <<"ingresaar un valor entero el caul sera el tamaño del vector (<30): "<<endl ;
	int tam ;
	cin >>tam ;

	// declaro vector UNO y DOS, Y el TRES ya que estoy de paso
	int vUno[tam] ;
	int vDos[tam] ;
	int vTres[tam] ;


	int i;
	// cargo los datos de los vectores UNO
	for(i = 0 ; 0<tam ; i++){

		cout <<"ingrerse un valor que se agregara en el Vector Uno "<<endl ;
		cin >> vUno[i] ;
	}

	// cargo los datos de los vectores DOS
	for(i = 0 ; 0<tam ; i++){

		cout <<"ingrerse un valor que se agregara en el Vector Dos "<<endl ;
		cin >> vDos[i] ;
	}

	i= 0 ; // inicializo para poder meter los valores a vector TRES


	// meto los valores de TRES intercalado
	while (i <tam){

		if(i%2==0){

		vTres[i] = vUno[i] ;

		}else{

		vTres[i] = vDos[i] ;

		}
	i++ ;
	}

	// muestro el vector Tres

	for (int k = 0 ; k<tam ; k++){


	cout <<"el vector TRES sera :" << vTres[k] <<endl;
	}





	return 0 ;
}















