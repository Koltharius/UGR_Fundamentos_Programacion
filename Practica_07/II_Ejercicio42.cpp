/*
   Autor: David Sanchez Jimenez
   Ejercicio 42 Relacion 2
   Descripcion: Calcula el numero de veces que
                aparece la cifra n en un intervalo
                introducido
   Necesita: el numero a buscar de 1 a 9
             el valor minimo y maximo del intervalo
   Calcula: las veces que aparece el numero entre el
            intervalo indicado
*/

#include <iostream>
#include <string>
using namespace std;

int main(){
   int cifra, min, max, contador;
   int potencia;
   int i_copia, num_digitos;
   int digito;

   const string CIFRA = "Introduzca un numero entre 0 y 9: ";
   const string MINIMO = "Introduzca el minimo del intervalo (mayor o igual que 1): ";
   const string MAXIMO = "Introduzca el maximo del intervalo (Mayor que el minimo introducido): ";

   cout << "Vamos a buscar cuantas veces aparece una cifra de 0 a 9 en el intervalo que desee: \n\n";

   cout << CIFRA;
   cin >> cifra;
   while(cifra < 0 || cifra > 9){
      cout << CIFRA;
      cin >> cifra;
   }

   cout << MINIMO;
   cin >> min;
   while (min <= 0) {
      cout << MINIMO;
      cin >> min;
   }

   cout << MAXIMO;
   cin >> max;
   while (max < min) {
      cout << MAXIMO;
      cin >> max;
   }

   contador = 0;
   num_digitos = 1;

   for(int i=min; i<=max; i++){
      i_copia = i;
      potencia = 1;

      while(i_copia >= 10){
         i_copia /= 10;
         num_digitos++;
         potencia = potencia * 10;
      }

      i_copia = i;

      for(int j=1; j<=num_digitos; j++){
         digito = i_copia / potencia;
         if(cifra == digito){
            contador ++;
         }
         i_copia = i_copia % potencia;
         //potencia = potencia / 10;
      }
   }

   cout << "\n\nSe han encontrado un total de " << contador << " veces la cifra " << cifra << " en el intervalo [" << min << "," << max << "]\n\n";
}
