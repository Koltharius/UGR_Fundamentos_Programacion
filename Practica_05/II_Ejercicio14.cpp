#include <iostream>
#include <string>

using namespace std;

enum class OrdenNumeros{
   orden_ascendente,
   orden_descendente,
   ningun_orden
};

int main() {
   // declaracion de variables
   int numero_1;
   int numero_2;
   int numero_3;
   const string MENSAJE = "Introduce un numero: ";
   OrdenNumeros orden_numeros;
   bool descendente;
   bool ascendente;

   // entrada de datos
   cout << MENSAJE;
   cin >> numero_1;
   cout << MENSAJE;
   cin >> numero_2;
   cout << MENSAJE;
   cin >> numero_3;

   // computo de datos y salida de datos
   descendente = ((numero_1 > numero_2) && (numero_2 > numero_3));
   ascendente = ((numero_1 < numero_2) && (numero_2 < numero_3));

   if (descendente) {
      orden_numeros = OrdenNumeros::orden_descendente;
   }

	else if (ascendente) {
      orden_numeros = orden_ascendente;
   }

	else {
      orden_numeros = OrdenNumeros::ningun_orden;
   }

   switch (orden_numeros) {
      case OrdenNumeros::orden_descendente:
         cout << "\nEstan ordenados descendentemente\n" ;
         break;
      case OrdenNumeros::orden_ascendente:
         cout << "\nEstan ordenados ascendentemente\n" ;
         break;
      case OrdenNumeros::ningun_orden:
         cout << "\nLos numeros no estan ordenados.\n";
         break;
   }
}
