#include <iostream>
#include <cmath>
using namespace std;

string ExtraeDigitos(int numero){
   int numero_positivo, num_digitos, potencia, digito;
   int i;
   bool es_negativo;

   es_negativo = numero < 0;
   numero_positivo = abs(numero);
   num_digitos = 1;
   potencia = 1;
   string cadena;

   while (numero_positivo > 9){
      numero_positivo = numero_positivo / 10;
      num_digitos++;
      potencia = potencia * 10;
   }

   numero_positivo = abs(numero);

   if (es_negativo)
     cadena = "- ";

   for (i = 1; i <= num_digitos; i++){
      digito = numero_positivo / potencia;
      cadena = cadena + to_string(digito) + " ";
      numero_positivo = numero_positivo % potencia;
      potencia = potencia / 10;
   }

   return cadena;
}

int main(){
   int numero;

   cout << "Introduce un entero: ";
   cin >> numero;

   cout << "\n\nLos digitos son: ";
   cout << ExtraeDigitos(numero);

   cout << "\n\n";
}
