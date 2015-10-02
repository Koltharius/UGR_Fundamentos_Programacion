/*
   Autor: David Sanchez Jimenez
   Ejercicio 10 Relacion 1
   Descripcion: Programa que calcula la media aritmetica muestral
                y la desviacion estandar muestral para n personas
   Necesita: El valor de tres alturas expresado en centimetros
   Calcula: La media aritmetica muestral y la desviacion tipica
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {
   const string Mensaje = "\nIntroduzca la altura en centimetros: "

   // Declaracion de datos
   double altura_uno;
   double altura_dos;
   double altura_tres;
   double media;
   double desviacion;

   // Entrada de datos
   cout << Mensaje;
   cin >> altura_uno;
   cout << Mensaje;
   cin >> altura_dos;
   cout << Mensaje;
   cin >> altura_tres;

   // Computo de datos
   media = (altura_uno + altura_dos + altura_tres) / n;

   desviacion = sqrt ((pow(altura_uno - media, 2) +
                       pow(altura_dos - media, 2) +
                       pow(altura_tres - media, 2)
                      ) / 3);

   // Salida de datos
   cout << "\nEl valor de la media aritmetica es " << media << "\n\n";
   cout << "\nEl valor de la desviacion tipica es " << desviacion << "\n\n";
}
