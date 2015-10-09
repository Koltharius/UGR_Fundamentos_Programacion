/* Programa que lee por teclado un caracter numerico y devuelve
   el valor entero que corresponda
   Necesita: char con valor de '0' a '9'
   Obtiene: entero correspondiente de 0 a 9
*/

#include <iostream>

using namespace std;

int main() {
   // Declaracion de variables
   char car;
   int entero;

   // Entrada de datos
   cout << "Introduzca un caracter numerico de 0 a 9: ";
   cin >> car;

   // Computo de datos
   entero = car - '0';     // Diferencia entre la posicion del
                           // caracter introducido y
                           // el caracter '0'

   // Salida de datos
   cout << "\nEl valor entero del caracter " << car << " es " << entero << "\n\n";

   system("pause");
}
