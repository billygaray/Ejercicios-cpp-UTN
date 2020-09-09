//============================================================================
// Name        : MI-8.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dado un triangulo representado por sus lados L1,L2,L3 ; determinar e imprimir
 * uan leyenda segun sea : equilatero ,  isiscles o escaleno. */
//============================================================================

#include<iostream>

using namespace std;

int main(){
    int L1,L2,L3;

    cin >>L1>>L2>>L3;

    if (L1!=L2 && L2 != L3 && L1 != L3){

        cout <<"escaleno";
    }else
    		 if (L2==L3 && L3==L1){

                cout <<"equilatero ";

    		}else {

            cout <<"isoceles ";

    				}
}
