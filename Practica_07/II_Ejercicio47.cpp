/*
   Autor: David Sanchez Jimenez
   Ejercicio 45 Relacion 2
   Descripcion: Pinta un triangulo y un cuadrado como los anteriores pero de dimension n, introducida por teclado
*/

#include <iostream>
using namespace std;

int main(){
   int num_filas, valor_inicial;

   cout << "Introduzca el valor inicial: ";
   cin >> valor_inicial;
   cout << "Introduzca el numero de filas a imprimir: ";
   cin >> num_filas;

   cout << endl << endl;

   for(int i=valor_inicial; i<=valor_inicial+num_filas-1; i++){
      for(int j=i; j<=num_filas; j++){
         cout << j << " ";
      }
      cout << endl;
   }

   cout << endl;

   for(int i=valor_inicial; i<=valor_inicial+num_filas-1; i++){
      for(int j=i; j<=i+num_filas-1; j++){
         cout << j << " ";
      }
      cout << endl;
   }

   cout << endl << endl;
}
