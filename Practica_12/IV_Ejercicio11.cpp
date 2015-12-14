#include <iostream>
using namespace std;

class ContadorMayusculas{
private:
   static const int NUM_MAYUS = 'Z' - 'A' + 1;
   int contador[NUM_MAYUS];

   int Indice_Letra(char letra){
      return letra - 'A';
   }

public:
   ContadorMayusculas(){
      for(int i=0; i<NUM_MAYUS; i++){
         contador[i] = 0;
      }
   }

   int Num_Mayus(){
      return NUM_MAYUS;
   }

   void IncrementaConteo(char mayuscula){
      int indice;

      if(isupper(mayuscula)){
         indice = Indice_Letra(mayuscula);
         contador[indice] = contador[indice] + 1;
      }
   }

   int CuantasHay(char mayuscula){
		return contador[Indice_Letra(mayuscula)];
	}
};

int main(){
   const char TERMINADOR = '.';
   char letra;
   ContadorMayusculas contador_mayusculas;

   cin >> letra;

   while(letra != TERMINADOR){
      contador_mayusculas.IncrementaConteo(letra);
      cin >> letra;
   }

   for(char mayus = 'A'; mayus <= 'Z'; mayus++){
      cout << "- Letra " << mayus << ": " << contador_mayusculas.CuantasHay(mayus) << "\n";
   }

   cout << "\n\n";
}
