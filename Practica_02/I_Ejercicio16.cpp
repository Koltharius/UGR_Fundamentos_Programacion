/*
   Autor: David Sanchez Jimenez
   Ejercicio 16 Relacion 1
   Descripcion: Programa que calcula el numero de segundos que hay
                entre dos instantes de tiempo.
   Necesita: Hora, minuto y segundo inicial
             Hora, minuto y segundo final
   Calcula: Tiempo en segundos entre ambos instantes
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de datos
   int hora_inicial;
   int minuto_inicial;
   int segundo_inicial;
   int hora_final;
   int segundo_final;
   int minuto_final;
   int diferencia_hora;
   int diferencia_minutos;
   int diferencia_segundos;
   int diferencia_total;

   // Entrada de datos
   cout << "Introduzca la hora inicial: ";
   cin >> hora_inicial;
   cout << "Introduzca el minuto inicial: ";
   cin >> minuto_inicial;
   cout << "Introduzca el segundo inicial: ";
   cin >> segundo_inicial;
   cout << "Introduzca la hora final: ";
   cin >> hora_final;
   cout << "Introduzca el minuto final: ";
   cin >> minuto_final;
   cout << "Introduzca el segundo final: ";
   cin >> segundo_final;

   // Computo de datos


   // Salida de datos
   cout << "\nEl numero de segundos que hay entre ambos instantes es " << segundos_finales;

   // system("pause");
}
