//============================================================================
// Name        : pasarDeBinarioADecimal-Vectores.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* 
	Hacer el paso de los numero binarios a numeros decimales:
	ejm:
	
	  1     2     4     8    16    32     64 
	-----------------------------------------
   |  0     0     0     0    0     0      0 |
	----------------------------------------	
	array de de tamañ 7 		

 */
//========================================================================


#include <iostream> 

using namespace std ; 

int main (){
	int binarios[7]={1,2,4,8,16,32,64};
	int decimal, digitosB;
	
	int numBinario;
	int resultado = 0;
	
	cout <<"de cuantos digitos sera tu binario (<=7)" <<endl ; // pregunto la cantidad maxima que twendra mi binario array.
	cin >>digitosB;
	int i;
		
		cout <<"ingresar el numero binario(0-1)" <<endl;  // ingreso el numero binario 0 o 1 . ejemplo 1010 es un 4 decimal. 
		for (i =0 ; i<digitosB  ; i++){
			
			
			cin >>numBinario;
			
			if (numBinario==1){                 // Veo si el binario es 1 y si lo es sumo a resukltado que tendra la suma total del binario
			
			resultado = binarios[i] + resultado;
			
			}
			
			
			
		} 
	
	cout <<"\nel rsultado del  numero binario a decimal es : " << resultado ;
	
	
	
	return 0;
}



