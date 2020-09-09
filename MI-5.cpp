//============================================================================
// Name        : MI-5.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dados dos valores enteros y distintos, emitir una leyenda apropiada que
 * informe cual es el mayor entre ellos. */
//============================================================================

#include <iostream>
using namespace std;

int main() {
  int a , b ;

  cin>> a>>b;
  if (a>b){

	  cout << "el mayor es: "<< a;
  }else {

	  cout << "el mayor es: "<< b;

  }
	return 0;
}
