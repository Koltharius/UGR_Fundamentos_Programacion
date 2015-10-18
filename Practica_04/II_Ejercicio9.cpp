/*
   Autor: David Sanchez Jimenez
   Ejercicio 9 Relacion 2
   Descripcion: Programa que calcula el precio total de venta dependiendo de
                cuantas unidades se hayan vendido y del precio total aplicando
                ciertos descuentos cuando es posible
   Necesita: precio unitario del producto y total de productos adquiridos
   Calcula: precio final de la compra
*/

#include <iostream>

using namespace std;

int main(){
   // declaracion de variables
   const int MINIMO_UNIDADES_PARA_DESCUENTO = 100;
   const double MINIMO_VENTA_GRANDE_PARA_DESCUENTO = 700;
   const double IV_DESCUENTO_POR_UNIDADES_VENDIDAS = 1 - 0.03;
   const double IV_DESCUENTO_POR_VENTA_GRANDE = 1 - 0.02;
   double precio_unitario, total_venta;
   int unidades_vendidas;

   bool mas_de_cien_unidades;

   // entrada de datos
   cout << "Precio unitario: ";
   cin >> precio_unitario;
   cout << "Unidades vendidas: ";
   cin >> unidades_vendidas;

   mas_de_cien_unidades = unidades_vendidas >= MINIMO_UNIDADES_PARA_DESCUENTO;

   // computo de datos
   if(unidades_vendidas >= MINIMO_UNIDADES_PARA_DESCUENTO) {
      precio_unitario = precio_unitario * IV_DESCUENTO_POR_UNIDADES_VENDIDAS;
   }

   total_venta = precio_unitario * unidades_vendidas;

   if((total_venta >= MINIMO_VENTA_GRANDE_PARA_DESCUENTO) && mas_de_cien_unidades) {
      total_venta = total_venta * IV_DESCUENTO_POR_VENTA_GRANDE;
   }

   // salida de datos
   cout << "\nTotal venta: " << total_venta << "\n\n";
}
