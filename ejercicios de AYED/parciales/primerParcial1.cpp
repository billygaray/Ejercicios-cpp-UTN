//============================================================================
// Name        : primerParcial1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
/* Enunciado :
 *
 * Dado  un archivo existente PRODS.DAT de 99 productos prdendos  por codigo
 * de producto con el siguiente diseño:
 *
 * codigo de producto  (1 a 99)
 * precio unitario (float)
 * stk (int)
 *
 * (es decir que cada archivo se encuentra en su posicion segun el codigo,
 *  el 1 en el registo 1 , el 2 en el registro 2 , y asi sucesivamente.
 *
 *  y un conjunto de pedidos que se ingresan, donde de cada uno se conoce codigo
 *  de produto y cantidad de unidades pediudad (int). Los pedidos finalizan con
 *  un codigo de producto igual a 0 .
 *
 *
 *  cheando ue el archivo se dee verificar el stock restante del producto para
 *   ver si se puede satisfacer el epdido o no ( no se satiusface porpartes ,
 *   si hay 15 unidades y se piden 20 se rechazan los 20).
 *
 *   Se  pide diseñar el algoritmis que leyendo los datos del archivo obtenga:
 *
 *   a) de las ventas efectuadas imprimir
 *   COD Producto    Total de la venta
 *      99               9999.99
 *
 *	 b) manteer actualizado el stock de productos en el archivo
 *
 *	 c) importe total de la venta aprobada de mayor importe
 *
 *	 d) (p/puntaje de promocion ) generar un archivo PENS.dat con los pedidos
 *	 que no se pudieron concretar (stk insuficiente)
 *
 *
 *	 RESUELVA MODULARMNETE (ALMENOS UN MODULI DE CADA TIPO ) UTILIZANDO PARAMETTROS.
 *
 *
 *  */




#include <iostream>
using namespace std;

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
