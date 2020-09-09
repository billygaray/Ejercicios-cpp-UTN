//============================================================================
// Name        : MI-22.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dado un conjunto de Nombres y Fechas d nacimientos (AAAAMMDD), que finaliza
 * con un Nombre = 'FIN' , informar el nombre de la persona cpn mayor edad y el
 * de la mas joven.
 *  */
//============================================================================

#include <iostream>
using namespace std;

int main() {
bool pVez = true;
string nom,maxNom,minNom;
int fecha, max,min;

cout << "ingresar nombre ";
cin >> nom;
cout << "ingrese una fecha (AAAAMMDD): ";
cin >> fecha ;

	while(nom != "FIN"){

		if (fecha > max || pVez) {
		max = fecha ;
		maxNom = nom;
		}

		if (fecha <min || pVez) {
		min = fecha ;
		minNom = nom;
		}

	pVez = false;
	cout << "ingresar nombre ";
	cin >> nom;
	cout << "ingrese una fecha (AAAAMMDD): ";
	cin >> fecha ;

	}
cout<< "el mas joven es : "<<maxNom	<<endl;
cout<< "el mas viejo es : "<<minNom	;
	return 0;

}
