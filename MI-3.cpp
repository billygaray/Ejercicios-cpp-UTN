//============================================================================
// Name        : MI-3.cpp
// Author      : Billy Garay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dada un numero entero de la forma (AAAAMMDD), que representa una fecha valida mostrar
 * el dia,  mes y a�o que representa. */
//============================================================================

#include <iostream>

using namespace std;

int main (){

    int f;
    int a,m,d,aux;


    cin >>f;

    a=f/10000;
    aux=f%10000;
    m=aux/100;
    d=aux%100;

    cout<<"dia "<< d << " mes "<<m << " anio "<<a;
}
