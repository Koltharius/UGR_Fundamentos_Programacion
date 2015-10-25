#include <iostream>
using namespace std;

enum class MayusMinus{
   mayuscula,
   minuscula,
   no_es_caracter
};



int main() {
   // declaracion de variables
   char caracter;
   char caracter_convertido;
   const int DISTANCIA_MAYUS_MIN = 'a' - 'A';
   bool es_mayuscula;
   bool es_minuscula;
   MayusMinus mayus_minus;

   // entrada de datos
   cout << "Introduzca una letra: ";
   cin >> caracter;

   // computo de datos
   es_minuscula = ((caracter >= 'a') && (caracter <= 'z'));
   es_mayuscula = ((caracter >= 'A') && (caracter <= 'Z'));

   if(es_mayuscula) {
      caracter_convertido = caracter + DISTANCIA_MAYUS_MIN;
      mayus_minus = MayusMinus::es_mayuscula;
   }
   else {
      if(es_minuscula) {
         caracter_convertido = caracter - DISTANCIA_MAYUS_MIN;
         mayus_minus = MayusMinus::es_minuscula;
      }
      else {
         caracter_convertido = caracter;
         mayus_minus = MayusMinus::no_es_caracter;
      }
   }

   switch (mayus_minus) {
      case MayusMinus::es_mayuscula:
         cout << "\nEl caracter en minuscula es " << caracter_convertido << "\n" ;
         break;
      case MayusMinus::es_minuscula:
         cout << "\nEl caracter en minuscula es " << caracter_convertido << "\n" ;
         break;
      case MayusMinus::no_es_caracter:
         cout << "\nNo ha introducido un catacter valido " << caracter_convertido << "\n" ;
         break;
   }

   // system("pause");
}
