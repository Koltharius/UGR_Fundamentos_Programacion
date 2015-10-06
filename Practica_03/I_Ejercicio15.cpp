/*
   Programa que lee por teclado las variables horas, minutos y segundos
   y las acota a su rango correspondiente.
   Necesita: La introduccion de tres variables enteras por parte del
             usuario correspondientes con horas minutos y segundos.
   Ejemplo: 10 horas 119 minutos 280 segundos lo transformaría
            12 horas 3 minutos 40 segundos
*/

#include <iostream>

using namespace std;

int main() {
   int horas;
   int minutos;
   int segundos;
   int horas_finales;
   int minutos_finales;
   int segundos_finales;
   int dias_finales;

   cout << "Introduzca la hora: ";
   cin >> horas;
   cout << "Introduzca los minutos: ";
   cin >> minutos;
   cout << "Introduzca los segundos: ";
   cin >> segundos;

   segundos_finales = segundos % 60;
   minutos_finales = ((minutos + (segundos / 60)) % 60);
   horas_finales = (((horas * 60) + (minutos + segundos/60))/60);
   horas = horas_finales % 24;
   dias_finales = horas_finales / 24;

   cout << "\nVariables Introducidas: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos\n";
   cout << "Variables Transformadas: " << dias_finales << " dias, " << horas_finales << " horas, " << minutos_finales << " minutos, " << segundos_finales << " segundos.\n\n";

   // system("pause");
}
