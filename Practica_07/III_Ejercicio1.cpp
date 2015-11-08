/*
   Autor: David Sanchez Jimenez
   Ejercicio 1 Relacion 3
   Descripcion: Por que varias funciones estan mal
*/

/*
   El else sobra. el return debería ser fuera del else.
*/

int ValorAbsoluto (int entero) {
   if(entero < 0) {
      entero = -entero;
   }
   else {
      return entero;
   }
}

/*
   es void, debería ser int Cuadrado
*/

void Cuadrado(int entero) {
   return entero*entero;
}

/*
   falta el return
*/

void Imprime(double valor) {
   double valor;
   cout << valor;
}

/*
   falta una variable a la que asignar el true o el false (bool positivo) y un return fuera del if
*/

bool EsPositivo(int valor) {
   if(valor > 0){
      return true;
   }
}
