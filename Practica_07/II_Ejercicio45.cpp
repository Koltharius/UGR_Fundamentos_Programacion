/*
   Autor: David Sanchez Jimenez
   Ejercicio 45 Relacion 2
   Descripcion: Pinta un triangulo
                1 2 3 4 5 6
                1 2 3 4 5
                1 2 3 4
                1 2 3
                1 2
                1
*/


#include <iostream>
using namespace std;

int main(){
   for(int i=1; i<=6; i++){
      for(int j=i; j<=6; j++){
         cout << j << " ";
      }
      cout << endl;
   }
}
