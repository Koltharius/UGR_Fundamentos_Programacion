/* Indocar si se produce un problema de precision o de desbordamiento en
   los siguientes ejemplos, indicando el resultado final de las operaciones
*/

#include <iostream>

using namespace std;

int main() {
   cout.precision(15);


   // int chico, chico1, chico2;
   // chico1 = 123456789;
   // chico2 = 123456780;
   // chico = chico1 * chico2;
   //
   // cout << chico1 << endl;
   // cout << chico2 << endl;
   // cout << chico << endl << endl;

   // El resultado de ejecucion es 1425960444, por lo que se produce una perdida de precision ya que se sale del rango de representacion de los enteros

   // long grande;
   // int chico1, chico2;
   // chico1 = 123456789;
   // chico2 = 123456780;
   // grande = chico1 * chico2;
   //
   // cout << chico1 << endl;
   // cout << chico2 << endl;
   // cout << grande << endl << endl;

   // El resultado de ejecucion es 1425960444, por lo que se produce una perdida de precision ya que se sale del rango de representacion de los enteros

   double resultado, real1, real2;
   real1 = 123.1;
   real2 = 124.2;
   resultado = real1 * real2;

   cout << real1 << endl;
   cout << real2 << endl;
   cout << resultado << endl << endl;
   //

   // double real, otro_real;
   // real = 2e34;
   // otro_real = real + 1;
   // otro_real = otro_real - real;
   //
   // cout << real << endl;
   // cout << otro_real << endl << endl;
   //
   // double real, otro_real;
   // real = 1e+300;
   // otro_real = 1e+200;
   // otro_real = otro_real * real;
   //
   // cout << real << endl;
   // cout << otro_real << endl << endl;
}
