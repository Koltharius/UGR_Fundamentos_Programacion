/*
   Autor: David Sanchez Jimenez
   Ejercicio 14 Relacion 1
   Descripcion: Programa que lee un valor entero de tres digitos
                y lo muestra por pantalla separado por tres espacios en blanco.
   Necesita: Un numero entero de 3 digitos
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   int numero;
   int centenas;
   int decenas;
   int unidades;

   // Entrada de datos
   cout << "Introduzca un numero entero de tres cifras: ";
   cin >> numero;

   // Computo de datos
   centenas = numero / 100;
   decenas = (numero % 100) / 10;
   unidades = numero % 10;

   // Salida de datos
   cout << "\nEl numero es " << centenas << "   " << decenas << "   " << unidades << "\n\n";

   // system("pause");
}
