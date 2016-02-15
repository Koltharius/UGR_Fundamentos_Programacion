/*
   Autor: David Sanchez Jimenez
   Ejercicio 13 Relacion 3
   Descripcion: Funcion que dice si dos numeros son amigos o no
   Necesita: Dos numeros
   Calcula: Calcula si dos numeros son amigos calculando todos los
            divisores del numero, sumandolos y mirando si son iguales
            que el otro numero. Si son iguales son amigos.
*/

#include <iostream>
using namespace std;

bool Amigos(int primero, int segundo){
   int contador = 2,
       cociente,
       suma_divisores_1 = 1,
       suma_divisores_2 = 1;

   cociente = primero;

   while(contador < cociente){
      if(primero % contador == 0){
         cociente = primero / contador;
         suma_divisores_1 += cociente + contador;
      }
      contador++;
   }

   contador = 2;
   cociente = segundo;

   while(contador < cociente){
      if(segundo % contador == 0){
         cociente = segundo / contador;
         suma_divisores_2 += cociente + contador;
      }
      contador++;
   }

   if(suma_divisores_1 == segundo && suma_divisores_2 == primero){
      return true;
   }
   else{
      return false;
   }
}

int main(){
   int primero, segundo;
   bool amigos;

   cout << "Introduzca el primer numero: ";
   cin >> primero;
   cout << "Introduzca el segundo numero: ";
   cin >> segundo;

   amigos = Amigos(primero,segundo);

   if(amigos){
      cout << "\nLos numeros " << primero << " y " << segundo <<  " son amigos.\n\n";
   }
   else{
      cout << "\nLos numeros " << primero << " y " << segundo <<  " no son amigos.\n\n";
   }
}
