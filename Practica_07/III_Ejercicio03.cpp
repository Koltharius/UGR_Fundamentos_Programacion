/*
   Autor: David Sanchez Jimenez
   Ejercicio 3 Relacion 3
   Descripcion: Modificacion del ejercicio de
                la relacion 2 al que se le ha
                añadido la funcion LeeEnteroPositivo
                la cual fuerza a introducir un
                numero positivo para el calculo del
                factorial
   Necesita: Un numero para calcular su factorial
             Una base y un exponente para calcular
             la potencia
   Calcula: el factorial y la potencia de los
            numeros introducidos
*/


#include <iostream>
#include <string>
using namespace std;

int LeeEnteroPositivo(string mensaje){
   int num_a_leer;

   cout << mensaje;
   cin >> num_a_leer;
   while (num_a_leer <= 0){
      cout << mensaje;
      cin >> num_a_leer;
   }

   return num_a_leer;
}

int main(){

   // Factorial

   int n;
   int factorial = 1;
   const string MENSAJE = "Introduzca un entero positivo: ";

   n = LeeEnteroPositivo(MENSAJE);

   for(int i=2; i<=n; i++) {
      factorial *= i;
   }


   cout << "\nEl factorial de " << n << " es " << factorial << "\n\n";

   // Potencia

   int base, exponente;
   int potencia = 1;
   cout << "Introduzca la base: ";
   cin >> base;
   cout << "Introduzca el exponente: ";
   cin >> exponente;

   for(int i=1; i<=exponente;i++){
      potencia *= base;
   }

   cout << "\nEl valor de " << base << "^" << exponente << " es " << potencia << "\n\n";
}
