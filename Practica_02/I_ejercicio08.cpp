/* Programa que calcula el reparto de ganancias entre varios
   trabajadores
   Necesita: ganancia_total
   Calcula: Ganancia de cada uno de los trabajadores
*/

#include <iostream>

using namespace std;

int main() {
  double ganancia_total;
  double ganancia_diseñador;
  double ganancia_fabricantes;

  cout << "Introduzca la ganancia total: ";
  cin >> ganancia_total;

  ganancia_fabricantes = ganancia_total / 4;
  ganancia_diseñador = ganancia_fabricantes * 2;

  cout << "El diseñador gana " << ganancia_diseñador << " y los fabricantes ganan " << ganancia_fabricantes << "\n\n";
}
