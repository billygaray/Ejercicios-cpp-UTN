//============================================================================
// Name        : MI-24.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Se dispone de un lote de valores enteros positivos que finaliza con un
 * numero negativo .
 * El lote esta dividido en sublotes por medio de valores cero.
 * Desarrollar un prorama que determine e informe :
 * a) por cada sublote el promedio de valores .
 * b) el total de sublotes procesados .
 * c) el valor maximo del conjunto, indicando en que sublote se encontro y la
 *    posicion relativa del mismo dentro del sublote.
 * d) valor minimo de cada sublote.
 * NOTA: lote puede estar vacio (primer valor neativo) , o puede haber uno,
 * varios o todos los sublotes vacios (ceros consecutivos ).
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {

int valor ;
int slote;
int sum1 = 0; int i1 = 0;
int sum2 = 0; int i2 = 0;
int sum3 = 0; int i3 = 0;
int j1=0 ; int j2 = 0 ; int j3= 0;
bool pVez1 = true ;  bool pVez2 = true ;  bool pVez3 = true ;
int min1 ; int min2 ; int min3 ;
int max = 0;
int slotemax ; int imax;

	cout << "inhrese un valor positivo : ";
	cin >> valor;

	cout   << "ingrese un sublote : ";
	cin >> slote;
	while(valor>0){

				switch (slote) {
				case 1:
					sum1 = sum1 + valor;

				j1 = 1;


					if (max < valor){
					max = valor;
					slotemax = slote;
					imax = i1;
								}
					if (pVez1 || valor < min1){
					min1 = valor ;
					i1++;
					pVez1 = false;
					}


				break;
				case 2:
				sum2 = sum2 + valor;

				j2 = 1;


					if (max < valor){
					max = valor;
					slotemax = slote;
					imax = i2;	}

					if (pVez2 || valor < min2){
					min2 = valor ;
					i2++;
					pVez2 = false;
					}

				break;
				case 3:
				sum3 = sum3 + valor;
				i3++;
				j3 = 1;

					if (max < valor){
					max = valor;
					slotemax = slote;
					imax = i3;
					}

					if (pVez3 || valor < min3){
					min3 = valor ;
					i3++;
					pVez3 = false;
					}
				break;

				}

		cout << "inhrese un valor positivo : ";
		cin >> valor;

		cout  << "ingrese un sublote : ";
		cin >> slote;
		}

	if(i1!=0){
	cout << "el promedio del lote 1 es :  "<< sum1/i1 << endl;	//  a ) arreglkar la salida con un if
	}else {
	cout << "no hubo valores en el lote 1 " << endl;
	}

	if(i2!=0){
	cout << "el promedio del lote 2 es :  "<< sum2/i2 << endl ;	//  a ) arreglkar la salida con un if
	}else {
	cout << "no hubo valores en el lote 2 "<<endl;
	}


	if(i3!=0){
	cout << "el promedio del lote 3 es :  "<< sum3/i3 <<endl ;	           //  a ) arreglkar la salida con un if
	}else {
	cout << "no hubo valores en el lote 3 "<<endl ;
	}


	cout << "el total de sublote procesados es "<< j1+j2+j3 <<endl;       // b)

			if (pVez1 == false){                                   // d)
				cout << "el valor minimo es " << min1 <<endl;
			}else {
				cout << "no hubo valores en el lote 1 "<<endl;
			}

			if (pVez2 == false){
				cout << "el valor minimo es " << min2<<endl ;
			}else {
				cout << "no hubo valores en el lote 2 "<<endl;
			}

			if (pVez3 == false){
				cout << "el valor minimo es " << min3<<endl;
			}else {
				cout << "no hubo valores en el lote 3 "<<endl;
			}


cout << "el valor maximo del conjunto es " << max << " y se encuentra en el sublote "<< "[" <<slotemax << "] "<<" y esta en la posicion "<<imax;;

return 0;
}
