/*
   Autor: David Sanchez Jimenez
   Ejercicio 18 Relacion 2
   Descripcion: Programa que lee desde teclado numeros reales hasta
                que se introduce un cero
   Necesita: Numeros reales introducidos por teclado
   Devuelve: Total de numeros introducidos y valor minimo
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
   const string MENSAJE = "Introduzca un valor real (0 para terminar): ";
   double dato;
   double minimo;
   int valores_validos;

   cout << MENSAJE;
   cin >> dato;

   minimo = dato;
   valores_validos = 0;

   while(dato != 0) {
      valores_validos++;

      if(dato < minimo) {
         minimo = dato;
      }

      cout << MENSAJE;
      cin >> dato;
   }

   if(valores_validos > 0) {
      cout << "\nSe han introducido " << valores_validos << " y el minimo valor es " << minimo << endl << endl;
   }
   else {
      cout << "\nNo se ha introducido ningun valor valido.\n\n";
   }
}
