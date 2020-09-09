//============================================================================
// Name        : MI-20.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dados 10 valores informar el mayor .
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n,aux;
	bool pVez = true;
	cout <<"ingrres un  numero : ";
	cin >>n;

		for (int i = 0; i < 10; ++i) {

			if (n>aux || pVez) {

			pVez = false;
			aux = n ;
			}

		cout <<"ingrres otro numero : ";
		cin>> n;
		}

	cout << "el mayor de todos los numeros : "<< aux;

	return 0;
}
