#include <iostream>

using namespace std;

int main(){

   // Factorial

   int n;
   int factorial = 1;
   cout << "Introduzca un entero positivo: ";
   cin >> n;

   for(int i=2; i<=n; i++) {
      factorial *= i;
   }


   cout << "\nEl factorial de " << n << " es " << factorial << "\n\n";

   // Potencia
   int base, exponente;
   int potencia = 1;
   cout << "Introduzca la base: ";
   cin >> base;
   cout << "Introduzca el exponente: ";
   cin >> exponente;

   for(int i=1; i<=exponente;i++){
      potencia *= base;
   }

   cout << "\nEl valor de " << base << "^" << exponente << " es " << potencia << "\n\n";
}
