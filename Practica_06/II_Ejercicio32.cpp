#include <iostream>
#include <cmath>
using namespace std;
int main() {
   int n, n_copia;
   int num_digitos, ultima_cifra;
   double suma;
   bool narcisista;

   cout << "Introduzca un numero entero: ";
   cin >> n;

   n_copia = n;

   num_digitos = 1;
   while (n_copia > 9){
      n_copia = n_copia / 10;
      num_digitos ++;
   }

   n_copia = n;

   for(int i=0; i<= num_digitos; i++) {
      ultima_cifra = n_copia % 10;
      suma = suma + pow(1.0 * ultima_cifra, num_digitos);
      n_copia = n_copia / 10;
   }

   narcisista = (suma == n);

   if(narcisista){
      cout << "\nEs narcisita.\n\n";
   }
   else{
      cout << "\nNo es narcisista.\n\n";
   }
}
