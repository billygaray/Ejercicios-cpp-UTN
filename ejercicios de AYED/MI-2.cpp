//============================================================================
// Name        : MI-2.cpp
// Author      : billy garay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dada una terna de numeros naturales que representan el dia , al mes y al a�o
 * de una determinda fecha informarla como un solo numero natural  de 8 digitos con
 * la forma (AAAAMMDD) */
//============================================================================

#include <iostream>

using namespace std ;

int main (){
    int a,d,m,f;

    cin>>d >>m >>a;

    f= (a*10000+m*100+d);

    cout <<f;


}
