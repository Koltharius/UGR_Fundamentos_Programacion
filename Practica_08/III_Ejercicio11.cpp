/*
   Autor: David Sanchez Jimenez
   Ejercicio 11 Relacion 3
   Descripcion: Funcion que cambia de mayuscula a minuscula y viceversa
   Necesita: Un caracter a convertir
   Calcula: El caracter introducido convertido. Contemplamos distintas
            funciones y distintas maneras de hacerlo
*/

#include <iostream>
using namespace std;

enum TipoLetra{mayuscula, minuscula, otro_caracter};
const int DIFERENCIA_MAY_MIN = 'a' - 'A';

char Mayuscula_a_minuscula(char caracter){
   return caracter + DIFERENCIA_MAY_MIN;
}

char Minuscula_a_mayuscula(char caracter){
   return caracter - DIFERENCIA_MAY_MIN;
}

TipoLetra Capitalizacion(char una_letra){
   TipoLetra tipo_letra;

   if(una_letra >= 'A' && una_letra <= 'Z'){
      tipo_letra = mayuscula;
   }
   else if(una_letra >= 'a' && una_letra <= 'z'){
      tipo_letra = minuscula;
   }
   else{
      tipo_letra = otro_caracter;
   }

   return tipo_letra;
}

char Convierte_a_Mayuscula(char caracter){
   char caracter_convertido;

   if(Capitalizacion(caracter) == minuscula){
      caracter_convertido = Minuscula_a_mayuscula(caracter);
   }
   else{
      caracter_convertido = caracter;
   }

   return caracter_convertido;
}

char Convierte_a_Minuscula(char caracter){
   char caracter_convertido;

   if(Capitalizacion(caracter) == mayuscula){
      caracter_convertido = Mayuscula_a_minuscula(caracter);
   }
   else{
      caracter_convertido = caracter;
   }

   return caracter_convertido;
}

char CambiaMayusculaMinuscula(char caracter){
   char caracter_convertido;
   TipoLetra capitalizacion;

   capitalizacion = Capitalizacion(caracter);

   if(capitalizacion == minuscula){
      caracter_convertido = Minuscula_a_mayuscula(caracter);
   }
   else if(capitalizacion == mayuscula){
      caracter_convertido = Mayuscula_a_minuscula(caracter);
   }
   else{
      caracter_convertido = caracter;
   }

   return caracter_convertido;
}

int main(){
   char caracter, caracter_convertido;

   cout << "Introduzca un caracter: ";
   cin >> caracter;

   caracter_convertido = CambiaMayusculaMinuscula(caracter);

   cout << "\nEl caracter '" << caracter << "' una vez convertido es '" << caracter_convertido << "'\n\n";
}
