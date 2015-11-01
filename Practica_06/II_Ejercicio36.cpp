#include <iostream>
#include <cmath>

using namespace std;

int main(){
   double primer_elemento, razon;
   int tope, n;

   double suma;

   cout << "Introduzca el primer termino de la progresion: ";
   cin >> primer_elemento;
   cout << "Introduzca la razon de la progresion: ";
   cin >> razon;

   do{
      cout << "Indice mayor o igual a 1 del ultimo termino a sumar: ";
      cin >> tope;
   }while (tope < 1);

   suma = primer_elemento;
   n = 2;

   while (n <= tope) {
      suma = suma + (primer_elemento * pow(razon, n-1));
   }

   cout << "\nLa suma hasta " << tope << " es " << suma << "\n\n";

   double termino_n = primer_elemento;
   suma = termino_n;

   n = 2;

   while (n <= tope) {
      termino_n *= razon;
      suma += termino_n;
      n++;
   }

   cout << "\nLa suma hasta " << tope << " es " << suma << "\n\n";
}
