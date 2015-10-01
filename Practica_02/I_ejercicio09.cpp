/* Programa que intercambia el valor de dos variables
   Necesita: Dos variables asignadas a un valor
*/

#include <iostream>

using namespace std;

int main() {
  int edad_Pedro;
  int edad_Juan;
  int temp;

  cout << "Introduzca la edad de Pedro: ";
  cin >> edad_Pedro;
  cout << "Introduzca la edad de Juan: ";
  cin >> edad_Juan;

  temp = edad_Pedro;
  edad_Pedro = edad_Juan;
  edad_Juan = temp;

  cout << "\nAhora la edad de Pedro es " << edad_Pedro << " y la edad de Juan es " << edad_Juan;
}
