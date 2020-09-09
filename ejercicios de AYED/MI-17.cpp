//============================================================================
// Name        : MI-17.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Se ingresa un conjunto d valores float , cada uno de los cualesrepresentan el suekdo de un
 * empleado, excepto el ultimo valor que es cero e indica el fin del conjuto.  Se pide
 * desarrolar un prograa que determine e informe :
 * a) cuantos empleados ganan menos $1.520.
 * b) cuantos ganan $1.520 o mas pero menos de $2.780.
 * c) cuantos ganan $2.780 o mas pero menos de $5.999.
 * d) cuantos ganan $5.999 o mas .
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int conta = 0;
	int contb = 0;
	int contc = 0;
	int contd = 0;
	cout << "ingrese el sueldo del empleado : "<<endl ;
	int n;
	cin >> n ;

		while(n != 0){
			if (n<1520) {
			conta++;
			}

			if (1520<=n && n<2780) {
			contb++;
			}

			if (2780<=n && n <5999) {
			contc++;
			}

			if (n>=5999) {
			contd++;
			}

		cout << "ingrese el sueldo del siguiente empleado : "<<endl ;
		cin >> n ;

		}

	cout << "los empleados que ganan menos de $1520 son: "<< conta<<endl;
	cout << "los empleados que ganan entre $1520 y menos de  $2780 son: "<< contb<<endl;
	cout << "los empleados que ganan entre 2780 y menos de $5999 son: "<< contc<<endl;
	cout << "los empleados que ganan mas de $5999 son: "<< contd;

	return 0;
}
