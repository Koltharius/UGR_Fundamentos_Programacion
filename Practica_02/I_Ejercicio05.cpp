/* Programa que estima la poblacion que habra
   en China dentro de dos años.
   Necesita: Poblacion actual
             Cada cuantos segundos nace una persona
             Cada cuantos segundos muere una persona
             Cada cuantos segundos emigra una persona
             Tiempo total en segundos
   Calcula: La poblacion en China en dos años
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   double poblacion = 1375570814;
   double nacimientos;
   double tiempo_nacimiento = 1.87;
   double muertes;
   double tiempo_muerte = 3.27;
   double emigraciones;
   double tiempo_emigracion = 71.9;
   double tiempo_total = 2;
   double poblacion_total;


   // Computo de datos
   tiempo_total = tiempo_total * 365 * 24 * 60 * 60;

   nacimientos = tiempo_total / tiempo_nacimiento;
   muertes = tiempo_total / tiempo_muerte;
   emigraciones = tiempo_total / tiempo_emigracion;

   poblacion_total = poblacion + (nacimientos - muertes - emigraciones);

   // Salida de datos
   cout << "\nLa poblacion total en China dentro de dos años sera " << poblacion_total << "\n\n";
   
   system("pause");
}
