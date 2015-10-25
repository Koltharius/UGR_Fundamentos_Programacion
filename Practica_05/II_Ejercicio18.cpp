/*
   Autor: David Sanchez Jimenez
   Ejercicio 18 Relacion 2
   Descripcion: Programa que lee desde teclado un entero e imprime
                todos sus divisores
   Necesita: Un entero positivo
   Devuelve: Todos los divisores del entero introducido
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   // Declaracion de variables
   int tope;
   int contador = 1;

   // Entrada de datos
   do{
      cout << "Introduzca un numero positivo: ";
      cin >> tope;
   } while (tope < 0);

   // Computo y salida de datos
   while (contador != tope) {
      if(tope % contador == 0) {
         cout << "\nEl numero " << contador << " es divisor de " << tope;
      }
      contador++;
   }

   cout << endl << endl;
   // system("pause");
}
