#include <iostream>
#include <string>

using namespace std;

int main() {

/**************************************************************/
// Ejercicio 5 Modificado
/**************************************************************/
   cout << "Ejercicio 3 Modificado:\n\n";
   // declaracion de variables
   int edad;
   double salario;
   double porcentaje_subida = 1 + 0.05;

   // entrada de datos
   cout << "\tIntroduce la edad: ";
   cin >> edad;
   cout << "\tIntroduce el salario: ";
   cin >> salario;

   // computo y salida de datos
   bool es_jubilado = edad > 65;
   bool tiene_salario_bajo = salario < 300;
   bool elegible_subida_salarial = es_jubilado && tiene_salario_bajo;

   if(elegible_subida_salarial) {
      salario *= porcentaje_subida;
      cout << "\n\tEl salario despues de la subida es de " << salario << endl << endl;
   }

   else {
      cout << "\n\tNo es aplicable la subida.\n\n";
   }


/**************************************************************/
// Ejercicio 5 Modificado
/**************************************************************/

   cout << "Ejercicio 5 Modificado:\n\n";

   // declaracion de variables
   int numero_1;
   int numero_2;
   int numero_3;
   const string MENSAJE = "\tIntroduce un numero: ";

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

   if (descendente)
		cout << "\n\tEstan ordenados descendentemente\n\n" ;

	else if (ascendente)
		   cout << "\n\tEstan ordenados ascendentemente\n\n" ;

	else
      cout << "\n\tLos numeros no estan ordenados.\n\n";
}
