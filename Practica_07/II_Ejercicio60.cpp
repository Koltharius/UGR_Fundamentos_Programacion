/*
   Autor: David Sanchez Jimenez
   Ejercicio 60 Relacion 2
   Descripcion: Programa que calcula los numeros
                triangulares por debajo de un
                numero n introducido
   Necesita: Un numero n
   Calcula: Los numeros triangulares debajo de este
*/

#include <iostream>
using namespace std;

int main(){
   int n;
   int suma;
   cout << "Introduce un numero entero: ";
   cin >> n;

   for(int i=1; i<=n; i++){
      suma = 0;
      for(int j=1; j<=i; j++){
         if(suma==i){
            cout << "El numero " << i << " es triangular\n";
         }
         suma = suma + j;
      }
   }
}
