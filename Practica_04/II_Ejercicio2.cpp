/*
   Autor: David Sanchez Jimenez
   Ejercicio 2 Relacion 2
   Descripcion: Programa que calcula la media aritmetica muestral,
                la desviacion estandar muestral para n personas y
                compara las tres alturas introducidas con el valor de la media
   Necesita: El valor de tres alturas expresado en centimetros
   Calcula: La media aritmetica muestral y la desviacion tipica y
            muestra si las alturas introducidas son menores o mayores
            a la media
*/
#include <iostream>
#include <cmath>

using namespace std;

int main() {
   const string Mensaje = "Introduzca la altura en centimetros: ";

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
   media = (altura_uno + altura_dos + altura_tres) / 3;

   desviacion = sqrt ((pow(altura_uno - media, 2) +
                       pow(altura_dos - media, 2) +
                       pow(altura_tres - media, 2)
                      ) / 3);

   // Salida de datos
   cout << "\nEl valor de la media aritmetica es " << media;
   cout << "\nEl valor de la desviacion tipica es " << desviacion << "\n\n";

   if (altura_uno < media)
      cout << "La altura de la primera persona: " << altura_uno << ", es menor que la media.\n";
   else
      cout << "La altura de la primera persona: " << altura_uno << ", es igual o mayor que la media.\n";

   if (altura_dos < media)
      cout << "La altura de la segunda persona: " << altura_dos << ", es menor que la media.\n";
   else
      cout << "La altura de la segunda persona: " << altura_dos << ", es igual o mayor que la media.\n";

   if (altura_tres < media)
      cout << "La altura de la tercera persona: " << altura_tres << ", es menor que la media.\n\n";
   else
      cout << "La altura de la tercera persona: " << altura_tres << ", es igual o mayor que la media.\n\n";
}
