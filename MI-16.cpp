//============================================================================
// Name        : MI-16.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Ingresar e infornmar  valores , mientras que el valor ingresado no sea negativo.
 * infornmar la mayor cantiad de valores ingresados.
 *  */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "ingresar un numero  mientras no sea negativo : ";
	int n;
	cin >> n ;
	int i =0;
		while (n >0){

		i++;

		cout << "ingresar otro numero  mientras no sea negativo : ";

		cin >> n ;

		}
	 cout << "la cantidad de positivos ingresados es: " << i;
	return 0;
}
