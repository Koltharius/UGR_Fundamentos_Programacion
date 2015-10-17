/* Programa que lee el valor de la edad y el salario de una persona le sube el
   salario si es menor de 300 euros y tiene más de 65 años
   Necesita: Edad, salario
   Devuelve: El salario aumentado si se cumple la condición
*/

#include <iostream>
using namespace std;

int main() {

   int edad;
   double salario;
   double porcentaje_subida = 1.05;

   cout << "Introduce la edad: ";
   cin >> edad;
   cout << "Introduce el salario: ";
   cin >> salario;


   bool es_jubilado = edad > 65;
   bool tiene_salario_bajo = salario < 300;
   bool elegible_subida_salarial = es_jubilado && tiene_salario_bajo;

   if(elegible_subida_salarial) {
      salario *= porcentaje_subida;
      cout << "\nEl salario despues de la subida es de " << salario << endl;
   }

   else {
      cout << "\nNo es aplicable la subida.\n";
   }

   // system("pause");
}
