//============================================================================
// Name        : MI-26.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Un buque de carga traslada 10  contenedores a tres diferentes puertos del pais.
 * Los puertos se identifican con los numeros 1 , 2 y 3 .
 * De cada contenedor que el buque traslade se registran los siguientes datos :
 * 		- Identificador del contenedor.
 * 		- Peso del contendor en kg.
 * 		- Puerto de arribo (un valor del 1 al 3).
 * Se pide calcular e informar:
 * 1) El peso total que el buque debe trasladar .
 * 2) La identificacion del contenedor de mayor peso.
 * 3) La cantidad de contenedores que debe treasladar a cada puerto.
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	string id;
	int pTotal = 0;
	int p1 = 0, p2 = 0, p3 = 0;
	string cMaxPeso;
	int peso,puertoArribo,max;

	for (int i = 0; i < 10;  i++) {

		cout<<"ingresar identificador del contenedor: "<<endl;
		cin>> id;
		cout<<"ingresar peso del contenedor: "<<endl;
		cin>>peso;
		cout<<"ingresar puerto de arribo: "<<endl;
		cin>>puertoArribo;

		pTotal = pTotal + peso ;

			if (i==0 || peso > max) {
				max = peso;
				cMaxPeso = id;
			}


			switch (puertoArribo) {
			case 1:
			p1++;
			break;
			case 2:
			p2++;
			break;
			case 3:
			p3++;
			break;
			}
	}

	cout<< "el peso total que el buque traslada es : "<< pTotal<<endl;

	cout <<"la identificacion del contenedor de mayor peso es : "<< cMaxPeso<<endl;

	cout <<"el puerto 1 traslada: "<<p1<<endl;
	cout <<"el puerto 2 traslada: "<<p2<<endl;
	cout <<"el puerto 3 traslada: "<<p3<<endl;


	return 0;
}
