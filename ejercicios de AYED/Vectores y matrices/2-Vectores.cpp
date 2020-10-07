//============================================================================
// Name        : 2-Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* 
 * Ingresar un valor entero  N(<30) . A continuacion un conjunto de N elementos . Si el ultimo elemento
  del conjunto tiene un valor menor quer  10 imprimir los negativo y encasoo contrario los demas  
 */
//============================================================================

#include <iostream>
using namespace std ; 

int main () {
	
	int vec[30] ;
	int vecPositivo[30]; int j =0 ;
	int vecNegativo[30]; int k =0 ;
	int cantidadElem ;
	int elemento ; 
	 
	cout <<"ingresar la cantidad de lementos " ;
	cin >> cantidadElem ;
	
	// ingresar los valores al array 
	int i ;
	for ( i = 0; i<cantidadElem ;i++ ){
		
		cout <<"ingrese los elementos al array" <<endl ;
		cin >>elemento;
		
		if( elemento>=0){
			vecPositivo[j]=elemento ;
			j++ ;
		}else{
			vecNegativo[k]=elemento ;
			k++ ;
		}
	}
	
	cout << "---------------------------------------------"<<endl;
	
	
	// He creado dos vectores tanto para los positivos como para los negativos
	// consulto por el ultimo elemento , y si es menor  a 10  imprimos los negativos 
	if ( vec[cantidadElem]<10 ){
		
		//imrpimimo,los positivos	
		for(i=0; i<j ;i++){
			
			cout << vecPositivo[i]<<endl;
		}
		
		
	}else{
		
		//impiormir los negativos
		for(i=0; i<k ;i++){
			
			cout << vecNegativo[i]<<endl;
		}
		
		
	}
	
	
	
	return 0; 
}
