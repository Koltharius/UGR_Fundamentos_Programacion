#include <iostream>
#include <cmath>

using namespace std;


int main(){
   int long n, n_copia, izq, der, contador;
   bool desgarrable = false;

   izq = der = contador = 0;

   cout << "Introduce un numero: ";
   cin >> n;
   n_copia = n;

   while (n_copia >= 10) {
      der = der + ((n_copia % 10) * (pow(10,contador)));
      izq = (n_copia / 10);
      n_copia = n_copia / 10;
      contador++;

      if(pow((izq+der),2) == n) {
         desgarrable = true;
      }
   }

   if(desgarrable) {
      cout << "\nEl numero es desgarrable. \n\n";
   }
   else {
      cout << "\nEl numero no es desgarrable\n\n";
   }
}
