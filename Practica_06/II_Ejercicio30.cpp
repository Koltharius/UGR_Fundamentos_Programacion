/*
   Autor: David Sanchez Jimenez
   Ejercicio 30 Relacion 1
   Datos del ejercicio:
      2 a 20
      1 b 10
      1 b 4
      3 c 40
      1 a 1
      2 b 15
      1 a 1
      1 c 2
      2 b 6
      -1
*/

#include <iostream>
using namespace std;

int main() {
   int identificador_sucursal;
   char codigo_producto;
   int  unidades_vendidas;

   int ventas_sucursal_1 = 0;
   int ventas_sucursal_2 = 0;
   int ventas_sucursal_3 = 0;

   cin >> identificador_sucursal;

   while(identificador_sucursal != -1) {
      cin >> codigo_producto;
      cin >> unidades_vendidas;

      switch (identificador_sucursal) {
         case 1: ventas_sucursal_1 += unidades_vendidas; break;
         case 2: ventas_sucursal_2 += unidades_vendidas; break;
         case 3: ventas_sucursal_3 += unidades_vendidas; break;
      }

      cin >> identificador_sucursal;
   }

   cout << "\nSucursal 1 ha vendido " << ventas_sucursal_1;
   cout << "\nSucursal 2 ha vendido " << ventas_sucursal_2;
   cout << "\nSucursal 3 ha vendido " << ventas_sucursal_3;
   cout << endl << endl;
}
