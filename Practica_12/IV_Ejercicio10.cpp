#include <iostream>
using namespace std;

int main(){
   const char TERMINADOR = '.';
   char letra;
   const int num_mayusculas = 'Z' - 'A' + 1;
   int contador_mayusculas[num_mayusculas] = {0};

   cin >> letra;

   while(letra != TERMINADOR){
      if(isupper(letra)){
         int indice_letra = letra - 'A';
         contador_mayusculas[indice_letra] = contador_mayusculas[indice_letra] + 1;
      }

      cin >> letra;
   }

   for(char mayus = 'A'; mayus <= 'Z'; mayus++){
      int indice_letra = mayus - 'A';
      int contador = contador_mayusculas[indice_letra];
      cout << "- Letra " << mayus << ": " << contador << "\n";
   }

   cout << "\n\n";
}
