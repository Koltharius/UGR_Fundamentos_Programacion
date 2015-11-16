/*
   Autor: David Sanchez Jimenez
   Ejercicio 7 Relacion 3
   Descripcion: Funcion que calcula la sumatoria
   Necesita: El primer termino de la progresion, la razon y el tope
   Calcula: La suma hasta el tope, la suma hasta infinito y el producto
            hasta el tope
*/

#include <iostream>
#include <cmath>

using namespace std;

double SumaHasta(double primer_termino, double razon, double tope) {
   double suma = primer_termino;

   for (int i = 2; i <= tope ; i++){
		primer_termino = primer_termino * razon;
		suma = suma + primer_termino;
	}

   return suma;
}

double ProductoHasta(double primer_termino, double razon, int tope) {
   double producto = primer_termino;

   for(int i=2; i<=tope; i++){
      producto = producto * primer_termino * pow(razon, i-1);
   }

   return producto;
}

double SumaHastaInfinito(double termino_primero, double razon) {
   return (termino_primero / (1 - razon));
}

int main(){
   double razon, primer_termino;
   int tope;

   double suma, suma_inf, producto;

   cout << "Introduzca el primer termino de la progresion: ";
   cin >> primer_termino;
   cout << "Introduzca la razon de la progresion: ";
   cin >> razon;

   do{
      cout << "Indice mayor o igual a 1 del ultimo termino a sumar: ";
      cin >> tope;
   }while (tope < 1);

   suma = SumaHasta(primer_termino, razon, tope);
   cout << "\nEl resultado de la suma hasta " << tope << " es " << suma;

   if(abs(razon) < 1) {
      suma_inf = SumaHastaInfinito(primer_termino, razon);
      cout << "\nEl resultado de la suma hasta infinito es " << suma_inf;
   }
   else{
      cout << "\nNo se puede calcular la suma hasta infinito porque |" << razon << "| >= 1";
   }

   producto = ProductoHasta(primer_termino, razon, tope);
   cout << "\nEl resultado del producto hasta " << tope << " es " << producto << "\n\n";
}
