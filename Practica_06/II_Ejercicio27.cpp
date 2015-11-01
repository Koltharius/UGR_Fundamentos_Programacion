/*
   Autor: David Sanchez Jimenez
   Ejercicio 27 Relacion 2
   Descripcion: Programa que lee un valor entero y lo
                muestra por pantalla separado por un
                espacios en blanco.
   Necesita: Un numero entero de 3 digitos
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
   int n, n_copia;
   int num_digitos;
   int digito;

   cout << "Introduce un numero: ";
   cin >> n;

   n_copia = n;

   num_digitos = 1;

   while(n_copia > 9) {
      n_copia = n_copia / 10;
      num_digitos ++;
   }

   n_copia = n;

   while (n_copia > 0) {
      digito = n_copia % 10;
      n_copia = n_copia / 10;
      cout << digito << " ";
   }

   cout << "\n\n";
}
