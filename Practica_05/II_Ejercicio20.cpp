/*
   Autor: David Sanchez Jimenez
   Ejercicio 20 Relacion 2
   Descripcion: Programa que lee desde teclado un entero e imprime
                todos sus divisores
   Necesita: Un entero positivo
   Devuelve: Todos los divisores del entero introducido
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   double interes, capital_inicial, capital_acumulado, capital_doblado;
   int numero_anios;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   cout << "Introduzca el capital inicial: ";
   cin >> capital_inicial;
   cout << "Introduzca el interes (en %): ";
   cin >> interes;

   capital_acumulado = capital_inicial;
   capital_doblado = capital_inicial * 2;
   interes = interes / 100.0;
   numero_anios = 0;

   while (capital_acumulado < capital_doblado) {
      numero_anios++;

      capital_acumulado = capital_acumulado +
                          (capital_inicial * interes);

      cout << "\nTotal obtenido en el anio numero " << setw(2) << numero_anios << " = " << setw(7) << setprecision(2) << capital_acumulado;
   }

   cout << "\nPara doblar la cantidad inicial deben pasar " << numero_anios << " anios";
   cout << endl << endl;
}
