//============================================================================
// Name        : MI-6.cpp
// Author      : Billy Garay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dadas dos fechas informar cual es la mas reciente .  Determine cuales
 * serian los datos de entrada y las leyendas a informarde acuerdo al proceso solicitado.  */
//============================================================================

#include <iostream>

using namespace std;

int dmaToAaaammdd(int x, int y, int z){

	int resultado = z*10000+y*100+x;

	return resultado;
}

int main (){
int d1,m1,a1;
int d2,m2,a2;
int f1,f2;

cout <<"ingrese una fecha .";
cin>>d1>>m1>>a1;

cout <<"ingrese otra  fecha .";
cin>>d2>>m2>>a2;

f1 = dmaToAaaammdd(d1,m1,a1);

f2 = dmaToAaaammdd(d2,m2,a2);

    if (f1>f2){

        cout<<"la fecha " <<f1 <<" es la mas reciente.";

    }else{

        cout<<"la fecha " <<f2 <<" es la mas reciente.";

    }
}
