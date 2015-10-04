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

   int tiempo_inicial_en_segundos;

   int hora_final;
   int minuto_final;
   int segundo_final;

   int tiempo_final_en_segundos;

   int horas_a_segundos = 3600;
   int minutos_a_segundos = 60;

   int tiempo_total;

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

   tiempo_inicial_en_segundos = (hora_inicial * horas_a_segundos) +
                                (minuto_inicial * minutos_a_segundos) +
                                segundo_inicial;

   tiempo_final_en_segundos = (hora_final * horas_a_segundos) +
                              (minuto_final * minutos_a_segundos) +
                              segundo_final;

   tiempo_total = tiempo_final_en_segundos - tiempo_inicial_en_segundos;

   // Salida de datos
   cout << "\nEl numero de segundos que hay entre ambos instantes es " << tiempo_total << "\n\n";

   // system("pause");
}
