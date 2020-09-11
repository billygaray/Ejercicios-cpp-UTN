//============================================================================
// Name        : MI-27.cpp
// Author      : Billy Garay
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
/* En un torneo de futbol participan K equipos . El torneo se juega con el sistema de todos contra todos 
. Por cada partido disputado por un equipo se dispone de la siguiente informacion :
a) Nro de equipo.
b) Codigo del resultado ( 'P' = Perdido , 'E' = Empatados , 'G' = Ganados ). 

Se arma un lote de datos con todos los resultados del torneo , agrupados por  Nro de equipo.
Desarrollar el progama que imprima : 
    Por cada equipo, su numero y le puntaje total que obtuvo (suma 3 si gana, y 1 si empata) 
*/
//============================================================================

#include <iostream>
using namespace std;

int main (){
    int pTotal = 0; 
    int contG = 0;
    int contE = 0;
    int k,n;  
    cout << "ingresar la cantidad de equipos " << endl;  // la cantidd de equipos 
    cin >> k ;
    char r ;


    for (int i = 0; i < k ; i++) {
       
        cout <<"ingrese el numero del equipo " << endl;  // aqui el numero de equipo puede ser 16, 20  o 1 2 3 ..
        cin >> n ;


        for (int j = 0 ; j < (k-1) ; j++){    

            cout << "ingrese el resultado de su partido 'G' 'P' 'E' "<<endl; // si hay 4 equipos hay 3 partidos .
            cin>>r;   // resultado del partido 
            
            switch (r){
            case 'G' : 
            contG++;
            break;

            case 'E' : 
            contE++;
            break;
                
            default:
            break;
            }
        }  
        
        pTotal = 3*contG + contE;  // aqui retiene el puntaje de todos los partidos que jugo el equipo.
        
        cout << "el equipo de numero " << n << " tiene el puntaje de " << pTotal <<endl ;


        contG = 0;   // para que reinicie a la suma del resultado de un nuevo equipo 
        contE = 0;

    }



}