/* Programa que intercambia el valor de tres variables
   Necesita: X = 10, Y = 20, Z = 30
   Calcula: Intercambia el valor de las variables
            X = 30, Y = 10, Z = 20
*/

#include <iostream>

using namespace std;

int main() {
   int x = 10;
   int y = 20;
   int z = 30;
   int intermedia;

   intermedia = x;

   x = z;
   z = y;
   y = intermedia;

   cout << "Los valores tras intercamibarlos son:\n";
   cout << "x = " << x << " y = " << y << " z = " << z << "\n\n";


}
