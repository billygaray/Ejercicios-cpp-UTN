//============================================================================
// Name        : MI-14.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* dado 50 numeros enteros , informar el promedio de los mayores que 100
 * y la suma de los menores que -10.
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int n;
	int sum =0;
	int men = 0;
	cout << "ingrese un numero. ";
	int j= 0;
	cin>> n ;

		for (int i = 0; i < 5; ++i) {

		if (n>=100) {
			sum = sum + n;
			j++;
		}

		if (n<-10) {
			men = men + n;
		}

		cout << "ingrese un numero. ";
		cin>> n ;
		}

	cout<< "el promedio de los mayoees que 100 es : "<< sum/j<<endl;

	cout << " la suma de los menores que -10 es  : "<<men;



	return 0;
}
