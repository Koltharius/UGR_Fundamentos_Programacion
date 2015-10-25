/*
   Autor: David Sanchez Jimenez
   Ejercicio 21 Relacion 2
   Descripcion: Programa que pide por teclado una letra mayuscula y
                calcula la minuscula correspondiente
   Necesita: Una letra mayuscula
   Devuelve: La correspondiente minuscula
*/

#include <iostream>

using namespace std;

int main() {
   // Declaracion de variables
   char letra_introducida;
   char letra_convertida;
   const int DISTANCIA_MAYUS_MIN = 'A' - 'a';

   // Entrada de datos
   do {
      cout << "Introduzca una letra mayuscula: ";
      cin >> letra_introducida;
   } while(letra_introducida >= 'a' && letra_introducida <= 'z');

   // Computo de datos
   if(letra_introducida >= 'A' && letra_introducida <= 'Z') {
      letra_convertida = letra_introducida - DISTANCIA_MAYUS_MIN;
   }

   // Salida de datos
   cout << "\nLa letra convertida es " << letra_convertida << endl;

}
