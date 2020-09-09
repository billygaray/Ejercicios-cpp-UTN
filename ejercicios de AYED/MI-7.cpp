//============================================================================
// Name        : MI-7.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dado tres valores determinar e imprimir una leyenda segun sea :"Forman triangulo "
 * o "No forman triangulo".*/
//============================================================================
#include <iostream>

using namespace std ;

int main(){
    int l1,l2,l3;

    cin>>l1>>l2>>l3;

    if (l1==0 || l2==0 || l3==0){

        cout << "no es triangulo";

    }else {

    	cout << "es triangulo";

    }
}
