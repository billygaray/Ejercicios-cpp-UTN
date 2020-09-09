//============================================================================
// Name        : MI-21.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dados  N  valores informar elmayor , el menor y en que poiscon del conjunto
 * fueron ingresados.
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
bool pVez= true;
int n, valor, imin, imax, max, min;
cout << "indicar la cantidad de nunmeros evaluados : ";
cin >> n;

cout << "ingrese un valor :  ";
cin >> valor;

	for (int i  = 1; i  <= n ; ++i ) {

		if (valor>max || pVez) {
			max = valor;
			imax = i;
		}
		if (valor<min || pVez) {
			min = valor ;
			imin = i;
		}

	cout << "ingrese otro  valor :  ";
	cin >> valor;

		pVez = false;
	}

cout <<"la posicion del mayor es  ["<<imax<<"]"<<max<<endl;
cout <<"la posicion del menor es  ["<<imin<<"]"<<min;

	return 0;
}
