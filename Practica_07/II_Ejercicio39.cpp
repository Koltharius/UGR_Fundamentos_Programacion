/*
   Autor: David Sanchez Jimenez
   Ejercicio 39 Relacion 2
   Descripcion: Numero de repeticiones que hay en
                una cadena de enteros dada
   Datos: 1 1 1 2 2 2 2 2 3 3 3 3 3 3 5 -1
*/

#include <iostream>

using namespace std;

int main(){
   int anterior, numero, repeticiones;

   cin >> numero;
   repeticiones = 1;

   while (numero != -1) {
      anterior = numero;
      cin >> numero;

      if(anterior == numero){
         repeticiones++;
      }

      else{
         cout << repeticiones << " " << anterior << "\n";
         repeticiones = 1;
      }
   }
}
