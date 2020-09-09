//============================================================================
// Name        : MI-25.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dada una serie de M pares { color ,  numero } que corresponden a los tiros
 * de una ruleta .Se pide informar :
 * a ) cuantas veces salio el numero cero y el numero anterior a cada cero.
 * b ) cuantas veces seguidas lleg� a re�tirse el color negro.
 * c ) cuantas veces seguidas lleg� a repetirse el mismo numero y cual fue.
 * d ) el mayor numero de veces seguidas que salieron alternados el rojo y el negro.
 * e ) el mayor numero de veces seguidas que se neg� la segunda docenas.  // no hecho
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
bool pVez = true ; int numero; string color; string colorAnt; int contColorAnt = 0;
int contCero = 0 ; int contNegro = 0;
int contRep1 = 0; int contRep2 = 0;int contRep3 = 0;int contRep4 = 0;int contRep5 = 0;int contRep6 = 0;

cout << "ingrese un color: "<<endl;
cin >> color;
cout <<"ingrese un numero: "<< endl;
cin >> numero;
colorAnt = color;
while (pVez || numero >= 0){
	if (numero == 0){
	contCero++;
	}

	if (color == "negro" ){
	contNegro++;
	}

	switch ( numero) {
		case 1:
			contRep1++;
		break;
		case 2:
			contRep2++;
		break;
		case 3:
			contRep3++;
		break;
		case 4:
			contRep4++;
		break;
		case 5:
			contRep5++;
		break;
		case 6:
			contRep6++;
		break;
	}



	if (colorAnt != color){
	contColorAnt++;
	}
colorAnt = color;
pVez = false;

cout << "ingrese un color: "<<endl;
cin >> color;
cout <<"ingrese un numero: "<< endl;
cin >> numero;

}
cout << "cuantas veces salio el numero cero "<< contCero<<endl;

cout<< "cuantas veces seguidas lleg� a re�tirse el color negro "<<contNegro<<endl;

cout << "el 1 se repitio "<<contRep1<<endl;
cout << "el 2 se repitio "<<contRep2<<endl;
cout << "el 3 se repitio "<<contRep3<<endl;
cout << "el 4 se repitio "<<contRep4<<endl;
cout << "el 5 se repitio "<<contRep5<<endl;
cout << "el 6 se repitio "<<contRep6<<endl;

cout <<"el mayor numero de veces seguidas que salieron alternados el rojo y el negro." << contColorAnt<<endl;
	return 0;
}
