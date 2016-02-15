#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '#';
   const int MAX_CARACTERES = 50;
   char palabra[MAX_CARACTERES];
   char a_insertar[MAX_CARACTERES];
   int util_palabra, util_a_insertar;
   char caracter;
   int inicio, n_a_quitar;
   int lectura, siguiente, escritura, diferencia_componentes;


   util_palabra = util_a_insertar = 0;

   caracter = cin.get();

   while (caracter != TERMINADOR && util_palabra < MAX_CARACTERES){
      palabra[util_palabra] = caracter;
      util_palabra++;
      caracter = cin.get();
   }

   caracter = cin.get();

   while (caracter != TERMINADOR && util_a_insertar < MAX_CARACTERES){
      a_insertar[util_a_insertar] = caracter;
      util_a_insertar++;
      caracter = cin.get();
   }

   cin >> inicio;
   cin >> n_a_quitar;

   if (util_a_insertar + util_palabra <= MAX_CARACTERES && n_a_quitar <= util_palabra - inicio && inicio <= util_palabra){
      diferencia_componentes = util_a_insertar - n_a_quitar;

      if ( diferencia_componentes < 0 ){
         siguiente = 1;
         lectura = inicio + n_a_quitar;
         escritura = inicio + util_a_insertar;
      }
      else{
         siguiente = -1;
         lectura = util_palabra - 1;
         escritura = util_palabra - 1 + diferencia_componentes;
      }

      int numero_componentes_a_desplazar = util_palabra - inicio - n_a_quitar;

      for (int i=0; i < numero_componentes_a_desplazar; i++){
         palabra[escritura] = palabra[lectura];
         lectura   = lectura   + siguiente;
         escritura = escritura + siguiente;
      }

      for (int i=0; i < util_a_insertar; i{++)
         palabra[inicio + i] = a_insertar[i];
      }
   }

   util_palabra = util_palabra + diferencia_componentes;

   cout << "\n\nSalida: ";

   for (int i=0; i<util_palabra; i++){
      cout << palabra[i];
   }

   cout << "\n\n";
}
