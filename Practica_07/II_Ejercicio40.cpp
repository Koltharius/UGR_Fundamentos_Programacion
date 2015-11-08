/*
   Autor: David Sanchez Jimenez
   Ejercicio 45 Relacion 2
   Descripcion: Modificacion del ejercicio del
                capital el cual solo acepta un
                interes entero y da los resultados
                desde el 1% hasta el interes
                indicado año por año
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

   for(int i=1; i<=interes; i++){
      cout << "\n\nCalculos realizados al " << i << "%:";
      for(int j=1; j<=numero_anios; j++){
         capital_acumulado = capital_acumulado +
                             (capital_inicial * (interes / 100));
         cout << "\n\tTotal obtenido en el anio numero " << setw(2) << j << " = " << setw(7) << setprecision(2) << capital_acumulado;
      }
   }

   cout << endl << endl;
}
