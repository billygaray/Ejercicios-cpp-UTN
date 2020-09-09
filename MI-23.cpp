//============================================================================
// Name        : MI-23.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
 /* Dado un conjunto  de valores , que finaliza con valor nulo, determinar e
  * imprimir (si hubo valores ) :
  * a) El maximo valor negativo.
  * b) El minimo valor negativo.
  * c) El valor minimo dentro del rango -17.3 y 26.9.
  * d) El promedio de todos los valores.
  * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
float  n , max , min ;
bool pVez = true ;
float sum = 0, rMin = 26.9;
int i = 0;


cout << "ingrese un valor:  ";
cin >> n ;
	while (n != 0){
		if (pVez || (n>max && n<0) ){
		max = n ;
		}

		if( pVez || (min > n && n<0) ){
		min = n ;
		}

		if ( -17.3 < n && n < 26.9 ){
			if (n<rMin){
			rMin = n;
			}
		}
	sum = sum + n ;
	pVez = false;
	i++;

	cout << "ingrese un valor:  ";
	cin >> n ;
	}

cout << "El maximo valor negativo  es  "<< max << endl;
cout << "El minimo valor negativo  es  "<< min << endl;
cout << "El promedio de todos los valores es " << sum/(i-1) <<endl;

	if (rMin == 26.9) {
	cout << "no hubo valores dentrodel rango .";
	} else {
	cout<< "El valor minimo dentro del rango -17.3 y 26.9 es :  "<< rMin;
	}

		return 0;
}
