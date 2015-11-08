/*
   Autor: David Sanchez Jimenez
   Ejercicio 2 Relacion 3
   Descripcion: Funcion que calcula el maximo
                de tres valores introducidos
   Necesita: Tres numeros
   Calcula: que valor de los introducidos es mayor
*/

#include <iostream>
#include <string>
using namespace std;

double Max(double un_valor, double otro_valor, double el_tercero) {
   double max;
   if (un_valor >= otro_valor)
		max = un_valor;
	else
		max = otro_valor;

	if (el_tercero >= max)
		max = el_tercero;

	return max;
}

int main(){
   double valor_1, valor_2, valor_3, maximo;
   const string MENSAJE = "Introduzca un numero: ";

   cout << MENSAJE;
   cin >> valor_1;
   cout << MENSAJE;
   cin >> valor_2;
   cout << MENSAJE;
   cin >> valor_3;

   maximo = Max(valor_1, valor_2, valor_3);

   cout << "\nEl valor maximo es " << maximo << "\n\n";
}
