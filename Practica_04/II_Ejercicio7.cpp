/*
   Autor: David Sanchez Jimenez
   Ejercicio 7 Relacion 2
   Descripcion: Programa que convierte de mayuscula a minuscula
                un caracter
   Necesita: Un caracter
   Devuelve: El caracter convertido a minuscula
*/

#include <iostream>
using namespace std;

int main() {
   // declaracion de variables
   char caracter;
   char caracter_convertido;
   const int DISTANCIA_MAYUS_MIN = 'a' - 'A';
   bool es_mayuscula;

   // entrada de datos
   cout << "Introduzca una letra: ";
   cin >> caracter;

   // computo de datos
   es_mayuscula = ((caracter >= 'A') && (caracter <= 'Z'));

   if(es_mayuscula) {
      caracter_convertido = caracter + DISTANCIA_MAYUS_MIN;
   }
   else {
      caracter_convertido = caracter;
   }

   // salida de datos
   cout << "\nEl caracter introducido " << caracter << " convertido a minuscula es " << caracter_convertido << "\n\n";

   // system("pause");
}
