/* Programa que calcula el reparto de ganancias entre
   varios trabajadores
   Necesita: ganancia_total
   Calcula: Ganancia de cada uno de los trabajadores
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   double ganancia_total;
   double ganancia_diseniador;
   double ganancia_fabricantes;

   // Lectura de datos
   cout << "Introduzca la ganancia total: ";
   cin >> ganancia_total;

   // Computos
   ganancia_fabricantes = ganancia_total / 5;
   ganancia_diseniador = ganancia_fabricantes * 2;

   // Salida de datos
   cout << " \nEl diseñador gana " << ganancia_diseniador << " y los fabricantes ganan " << ganancia_fabricantes << "\n\n";

   // system("pause");
}
