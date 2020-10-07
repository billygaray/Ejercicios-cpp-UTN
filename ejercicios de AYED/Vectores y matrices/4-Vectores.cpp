//============================================================================
// Name        : 4-Vectores.cpp
// Author      :
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/*
 Ingresar un valor entero N(<25). A continiacion ingresar un conjunto VEC de N componentes . si
 la suma de las componentes resulta mayor que cero imprimir las de indice impar, sino los otros elmentos.
  */
//============================================================================
#include <iostream>
using namespace std;

int main() {
	cout <<"ingresar el tamaño del vector"<<endl;
	int tam;
	cin >> tam;

	int vec [tam];
	int i;
	int sumTotal = 0;
	int vecImpar[tam];
	int vecPar[tam];
	int k = 0;
	int j = 0;
	//aqui cargo el vector
	for (i= 0; i < tam ; ++i) {
		cout <<"ingrese un dato al vector: "<<endl;
		cin >>vec[i]; // aqui ya estoy metiendo dato por dato al vector


		//aqui creo un vector que me guarde los indices que tienen impares
		if ( (vec[i]%2) != 0 ){
			vecImpar[j] = i;
			j++;
		}

		// aquim creo un vector que me guarde los indices que tienen  pares
		if ( (vec[i]%2)==0 ){
			vecPar[k] = i;
			k++;
		}

		sumTotal = sumTotal + vec[i]; // aqui tengo las sums de las compronentes
	}

	if (sumTotal>0){  //  sumTotal resulta mayor que cero imprimir las de indice impar

			for (i= 0; i < j ; ++i) {
			cout <<" las de indice impar son: "<< vecImpar[i] <<endl;
			}
	}else {
			for (i= 0; i < k ; ++i) {
			cout <<" las de indice par son: "<< vecPar[i] <<endl;
			}

	}



	return 0;
}
