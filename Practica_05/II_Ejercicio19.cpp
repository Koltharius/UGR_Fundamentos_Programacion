/*
   Autor: David Sanchez Jimenez
   Ejercicio 19 Relacion 2
   Descripcion: Programa que lee desde teclado un entero e imprime
                todos sus divisores
   Necesita: Un entero positivo
   Devuelve: Todos los divisores del entero introducido
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
   double interes, capital_inicial, capital_acumulado;
   int numero_anios, contador_anios;

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);

   cout << "Introduzca el capital inicial: ";
   cin >> capital_inicial;
   cout << "Introduzca el numero de anios: ";
   cin >> numero_anios;
   cout << "Introduzca el interes (en %): ";
   cin >> interes;

   capital_acumulado = capital_inicial;
   contador_anios = 1;
   interes = interes / 100.0;

   while (contador_anios <= numero_anios) {
      capital_acumulado = capital_acumulado +
                          (capital_inicial * interes);

      cout << "\nTotal obtenido en el anio numero " << setw(2) << contador_anios << " = " << setw(7) << setprecision(2) << capital_acumulado;

      contador_anios++;
   }

   cout << endl << endl;
}
