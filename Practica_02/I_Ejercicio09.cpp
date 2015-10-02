/*
   Autor: David Sanchez Jimenez
   Ejercicio 9 Relacion 1
   Descripcion:Programa que intercambia el valor de dos variables
   Necesita: Dos variables asignadas a un valor y una variable
             temporal para no perder el contenido de una de ellas
   Calcula: Intercambia el valor de ambas variables
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   int edad_Pedro;
   int edad_Juan;
   int temporal;

   // Entrada de datos
   cout << "Introduzca la edad de Pedro: ";
   cin >> edad_Pedro;
   cout << "Introduzca la edad de Juan: ";
   cin >> edad_Juan;

   // Computo de datos
   temporal = edad_Pedro;
   edad_Pedro = edad_Juan;
   edad_Juan = temporal;

   // Salida de datos
   cout << "\nAhora la edad de Pedro es " << edad_Pedro << " y la edad de Juan es " << edad_Juan;
}
