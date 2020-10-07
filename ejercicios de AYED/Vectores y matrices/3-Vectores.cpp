//============================================================================
// Name        : 3-Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* 
 * Ingresar un valor entero N (<20). A continuacio ingresar un conjuto VEC de N comopnetes
 Apartir de eeste conjuto generart otro FACT en el que cada elemento sea el factorial del 
 elemento homologo de VEC . Finalmente imprimir ambos vectores a razon de un valor de cada uno por reglon.
 */
//============================================================================

#include <iostream>
using namespace std ; 

int factorial(int fact[] ,int i){

	
	int j = fact[i]; 
	int resultado = 1 ;
	while(j>1){
	
	resultado = resultado * j;
	j--;
	}
	return resultado;}



int main () {
	int valor;
	int pos;
	cout <<"ingrese un valor que tendra el vector (<20))"<<endl;
	cin >> valor ;

	int vec[valor] ;
	int fact[valor] ;

	// vooy a cargar los elemntos al array vec ges
	int i ;
	for (i=0; i<valor ;i++){
		cout <<"ingrese los valores al vector" << endl;
		cin >>vec[i] ;
		
		
  	}
	
	for (i=0; i<valor ;i++){	
		int res = factorial (vec,i);
		
		cout << "  el valor de   " << vec[i]<< "   tiene como factorial    " << res << endl ; 
		
	}
		


return 0 ; 	
}



