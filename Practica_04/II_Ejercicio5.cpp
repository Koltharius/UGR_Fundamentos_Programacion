/*
   Autor: David Sanchez Jimenez
   Ejercicio 5 Relacion 2
   Descripcion: Programa que lee tres numeros y devuelve si
                estan ordenados (ascendentemente o descendentemente) o no estan ordenados
   Necesita: Tres numeros
   Devuelve: Si estan ordenados o no
*/


#include <iostream>
#include <string>

using namespace std;

int main() {

   // declaracion de variables
   int numero_1;
   int numero_2;
   int numero_3;
   const string MENSAJE = "Introduce un numero: ";

   bool descendente;
   bool ascendente;

   // entrada de datos
   cout << MENSAJE;
   cin >> numero_1;
   cout << MENSAJE;
   cin >> numero_2;
   cout << MENSAJE;
   cin >> numero_3;

   // computo de datos y salida de datos
   descendente = ((numero_1 > numero_2) && (numero_2 > numero_3));
   ascendente = ((numero_1 < numero_2) && (numero_2 < numero_3));

   if (descendente)
		cout << "\nEstan ordenados descendentemente\n" ;

	else if (ascendente)
		   cout << "\nEstan ordenados ascendentemente\n" ;

	else
      cout << "\nLos numeros no estan ordenados.\n";
}
