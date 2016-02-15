#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class SecuenciaCaracteres {
private:
   static const int TAMANIO = 50;
   char vector_privado[TAMANIO];
   int total_utilizados;

public:
   SecuenciaCaracteres()
      :total_utilizados(0){
   }

   int TotalUtilizados(){
      return total_utilizados;
   }

   int Capacidad(){
      return TAMANIO;
   }

   void Aniade(char nuevo){
      if(total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   char Elemento(int indice){
      return vector_privado[indice];
   }

   void Elimina(int posicion){
      if(posicion >= 0 && posicion < total_utilizados){
         int tope = total_utilizados - 1;

         for(int i=posicion; i<tope; i++){
            vector_privado[i] = vector_privado[i+1];
         }

         total_utilizados--;
      }
   }

   string ToString(){
      string cadena;

      for(int i=0; i<total_utilizados; i++){
         cadena = cadena + vector_privado[i];
      }

      return cadena;
   }

   bool EsPalindromo(){
      bool palindromo = true;
      int izquierda = 0;
      int derecha = total_utilizados - 1;

      while(izquierda < derecha && palindromo){
         if(vector_privado[izquierda] != vector_privado[derecha]){
            palindromo = false;
         }

         else{
            izquierda++;
            derecha--;
         }
      }

      return palindromo;
   }

   void Intercambia(int izquierda, int derecha){
      if((izquierda >= 0) && (derecha >= 0) && (izquierda < total_utilizados) && (derecha < total_utilizados)){
         char aux;
         aux = vector_privado[izquierda];
         vector_privado[izquierda] = vector_privado[derecha];
         vector_privado[derecha] = aux;
      }
   }

   void InvierteVector(){
      int izquierda = 0;
      int derecha = total_utilizados - 1;

      while(izquierda < derecha){
         Intercambia(izquierda, derecha);
         izquierda++;
         derecha--;
      }
   }

   int CuentaMayusculas(){
      int contador_mayusculas = 0;

      for(int i=0; i<total_utilizados; i++){
         if(Elemento(i) >= 'A' && Elemento(i) <= 'Z'){
            contador_mayusculas++;
         }
      }

      return contador_mayusculas;
   }
};

int main(){
   SecuenciaCaracteres vector;

   const char TERMINADOR = '.';

   cout << "Introduzca el contenido del vector: ";
   char caracter = cin.get();

   while (caracter != TERMINADOR){
      vector.Aniade(caracter);
      caracter = cin.get();
   }

   cout << "El vector introducido es: ";
   int tope = vector.TotalUtilizados();
   for(int i=0; i<tope; i++){
      cout << vector.Elemento(i);
   }

   bool palindromo = vector.EsPalindromo();
   if(palindromo){
      cout << "\nEl vector es un Palindromo";
   }
   else{
      cout << "\nEl vector no es un Palindromo";
   }

   cout << "\nEl vector Invertido es: ";
   vector.InvierteVector();
   tope = vector.TotalUtilizados();
   for(int i=0; i<tope; i++){
      cout << vector.Elemento(i);
   }

   int contador_mayusculas = vector.CuentaMayusculas();
   cout << "\nEl numero de mayusculas es " << contador_mayusculas;

   cout << endl << endl;
}
