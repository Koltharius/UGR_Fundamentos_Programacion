#include <iostream>
#include <cmath>

using namespace std;

int main() {

   // Declaracion de variables
   const double PI = 3.1415927;
   double esperanza;
   double desviacion;
   double abcisa;
   double resultado;

   // Entrada de datos
   cout << "Introduzca el valor de la esperanza: ";
   cin >> esperanza;
   cout << "Introduzca el valor de la desviacion: ";
   cin >> desviacion;
   cout << "Introduzca el valor de la abcisa: ";
   cin >> abcisa;

   // Computo de datos
   resultado = (1 / (desviacion * sqrt(2 * PI))) * exp(-0.5 * pow((abcisa - esperanza) / desviacion, 2));

   // Salida de datos
   cout << "\nEl resultado es: " << resultado << "\n\n";
   system("pause");
}
