/*
   Autor: David Sanchez Jimenez
   Ejercicio 46 Relacion 2
   Descripcion: Pinta un triangulo
                1 2 3 4 5 6
                2 3 4 5 6 7
                3 4 5 6 7 8
                4 5 6 7 8 9
                5 6 7 8 9 10
                6 7 8 9 10 11
*/

#include <iostream>
using namespace std;

int main(){
   for(int i=1; i<=6; i++){
      for(int j=i; j<=i+5; j++){
         cout << j << " ";
      }
      cout << endl;
   }

   cout << endl << endl;
}
