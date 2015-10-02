/* Programa que calcula la media aritmetica muestral
   y la desviacion estandar muestral para n personas
   Necesita:
   Calcula: La media aritmetica muestral y la
            desviacion tipica
*/

#include <iostream>
#include <cmath>

using namespace std;

int main() {

   // Declaracion de datos
   double altura_uno;
   double altura_dos;
   double altura_tres;
   double media;
   double desviacion;

   // Entrada de datos
   cout << "Introduzca la altura de la primera persona: ";
   cin >> altura_uno;
   cout << "\nIntroduzca la altura de la segunda persona: ";
   cin >> altura_dos;
   cout << "\nIntroduzca la altura de la tercera persona: ";
   cin >> altura_tres;

   // Computo de datos


   // Salida de datos
   cout << "\nEl valor de la media aritmetica es " << media << "\n\n";
   cout << "\nEl valor de la desviacion tipica es " << desviacion << "\n\n";
}
