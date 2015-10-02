/* Programa que intercambia el valor de dos variables
   Necesita: Dos variables asignadas a un valor
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   int edad_Pedro;
   int edad_Juan;
   int temp;

   // Entrada de datos
   cout << "Introduzca la edad de Pedro: ";
   cin >> edad_Pedro;
   cout << "Introduzca la edad de Juan: ";
   cin >> edad_Juan;

   // Computo
   temp = edad_Pedro;
   edad_Pedro = edad_Juan;
   edad_Juan = temp;

   // Salida de datos
   cout << "\nAhora la edad de Pedro es " << edad_Pedro << " y la edad de Juan es " << edad_Juan;
}
