/* Programa que evalua tres expresiones logicas
      - Detecta si una letra es minuscula
      - Detecta si una edad es menor de 18 o mayor de 65
      - Detecta si un año es bisiesto
*/

#include <iostream>

using namespace std;

int main() {

   /**********************************************/
   // Detectar si una letra es minuscula
   /**********************************************/

   // Declaracion de variables
   char letra;
   bool es_minuscula;

   // Entrada de datos
   cout << "Introduzca una letra: ";
   cin >> letra;

   // Computo de datos
   es_minuscula = (letra >= 'a') && (letra <= 'z');

   cout << "\nMinuscula: " << es_minuscula << "\n\n";

   /**********************************************/
   // Detectar poblacion menor de 18 o mayor de 65
   /**********************************************/

   // Declaracion de datos
   int edad;
   bool rango_edad;

   // Entrada de datos
   cout << "Introduzca una edad: ";
   cin >> edad;

   // Computo de datos
   rango_edad = (edad < 18) || (edad > 65);

   // Salida de datos
   cout << "\nEs menor de 18 o mayor de 65: " << rango_edad << "\n\n";

   /**********************************************/
   // Detectar si un anio es bisiesto
   /**********************************************/

   // Declaracion de datos
   int anio;
   bool es_bisiesto;

   // Entrada de datos
   cout << "Introduzca un anio: ";
   cin >> anio;

   // Computo de datos

   // Es true si anio es divisible por 4 y no por 100 o si
   // es divisible por 400
   es_bisiesto = ((anio % 4 == 0) && (anio % 100 != 0)) || (anio % 400 == 0);

   // Salida de datos
   cout << "\nEs bisiesto: " << es_bisiesto << "\n\n";

   // system("pause");
}
