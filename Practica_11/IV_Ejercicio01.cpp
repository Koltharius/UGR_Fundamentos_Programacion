#include <iostream>
#include <cctype>
using namespace std;

int main(){
   const int  TAMANIO = 100;
   const char TERMINADOR = '#';
   char vector[TAMANIO];
   char caracter;
   int  total_introducidos;
   int  numero_mayusculas;

   bool es_palindromo;
   int  izda, dcha;

   total_introducidos = 0;
   caracter = cin.get();

   while (caracter != TERMINADOR && total_introducidos < TAMANIO){
      vector[total_introducidos] = caracter;
      total_introducidos++;
      caracter = cin.get();
   }

   numero_mayusculas = 0;

   for (int i = 0; i < total_introducidos; i++){
      if (isupper(vector[i])){
         numero_mayusculas++;
      }
   }

   cout << "\n\nHay " << numero_mayusculas << " mayusculas";

   es_palindromo = true;
   izda = 0;
   dcha = total_introducidos - 1;

   while (izda < dcha && es_palindromo){
      if (vector[izda] != vector[dcha]){
         es_palindromo = false;
      }
      else{
         izda++;
         dcha--;
      }
   }

   if (es_palindromo){
      cout << "\nEs palindromo";
   }
   else{
      cout <<"\nNo es palindromo";
   }

   char copia;

	izda = 0;
	dcha = total_introducidos - 1;

	while (izda < dcha){
		copia = vector[izda];
      vector[izda]  = vector[dcha];
      vector[dcha]  = copia;
		izda++;
		dcha--;
	}

   cout << "\nVector invertirdo: < ";

   for (int i = 0; i < total_introducidos; i++){
      cout  << vector[i] << " ";
   }

   cout << "\n\n";      
}
