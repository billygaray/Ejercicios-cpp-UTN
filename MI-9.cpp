//============================================================================
// Name        : MI-9.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Dados un mes y el a�o correspondiente informar cuantos dias tiene el mes.*/
//============================================================================

#include <iostream>
using namespace std;

void anioBisiesto(int a){
	if (a%4==0) {
		cout << "29 dias . ";
	} else {
		cout << "28 dias . ";

	}
}

int main() {

	cout <<"imgrese un mes y el a�o: "<<endl;
	int m,a;
	cin >> m >>a;
	if (m==1 || m==3 ||m==5 || m==7 || m==8 || m==10 || m==12 ) {

		cout << "31 dias. ";

	}else{
		    if (m==4 || m==6 ||m==9 ||m==11) {

		    	cout << "30 dias. ";
		    }else{
			anioBisiesto(a);}
		  }
}
