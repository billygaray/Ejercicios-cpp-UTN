//============================================================================
// Name        : MI-4.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* A partir de un valor entero ingresando por teclado , se pide informar :
 * a) la quinta parte de dicho valor
 * b)el resto de la division por 5.
 * c)la septima parte del resultado del punto a).
 * */
//============================================================================
#include <iostream>
using namespace std;

int main() {
	int x,a,b,c;

	cin>>x;

	a= x/5;
	b=x%5;
	c= a/7;

	cout <<"a) "<< a <<" b) "<<b<<" c) "<<c;

	return 0;
}
