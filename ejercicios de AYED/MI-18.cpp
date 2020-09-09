//============================================================================
// Name        : MI-18.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dados un valor M determinar y emitir un listado con los M primeros multiplos
 * de 3 que no lo sean de 5 , dentro del conjunto de los numeros naturales.
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {

	cout << "ingrese un valor : ";
	int m;
	cin>> m;

		while (m!=0){
			if (m%3==0 && m%5!=0) {
			cout<< "multiplo de 3 y no de 5 es: "<<m <<endl;
			}

		cout << "ingrese un valor : ";
		cin>> m;
		}


	return 0;
}
