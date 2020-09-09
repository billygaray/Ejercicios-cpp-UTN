//============================================================================
// Name        : MI-12.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* Informar los primeros 10 numeros naturales y su sumatoria .
 * */
//============================================================================

#include <iostream>
using namespace std;

int main() {
	int sum = 0;
	for (int i = 1; i <= 10; ++i) {

		cout << i << endl;
		sum = sum +i;
	}

	cout << sum;
	return 0;
}
