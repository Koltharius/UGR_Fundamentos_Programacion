/* Programa que lee un caracter alfabético en minuscula por teclado
   y lo transforma en su mayuscula
   Necesita: La introduccion de un caracter en minuscula por teclado
   Calcula: El caracter introducido en mayuscula
*/

#include <iostream>

using namespace std;

int main() {
   char caracter_minuscula;
   char caracter_mayuscula;
   const int distancia_entre_mayuscula_minuscula = 32;

   cout << "Introduzca un caracter alfabetico en minuscula: ";
   cin >> caracter_minuscula;

   caracter_mayuscula = caracter_minuscula - distancia_entre_mayuscula_minuscula;

   cout << "El caracter introducido es " << caracter_minuscula << " y su mayuscula es " << caracter_mayuscula << "\n\n";

   // system("pause");
}
