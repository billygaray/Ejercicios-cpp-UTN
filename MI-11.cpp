//============================================================================
// Name        : MI-11.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Se ingrresa una edad, mostrar por pantalla alguna de las siguientes leyendas:
 * * 'menor' si la edad es menor o igual a 12.
 * * 'cadete' si la edad esta comprendida entre 13 y 18 .
 * * 'juvenil' si la edad es mayor que 18 y no supera los 26.
 * * 'mayor' en el caso que no cumpla nunguna de las codiciones anteriores.
 *  */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	cout << "ingrese una edad " << endl;
	int e;
	cin >> e;

	if (e<=12) {

		cout << "es menor";

	} else { if (13<=e && e<=18) {

			cout << "cadete";

			  } else { if (18<e && e<=26) {

				  cout << "juvenil";

			} else {

				cout << "es mayor";

			}

	  }


	}


	return 0;
}
