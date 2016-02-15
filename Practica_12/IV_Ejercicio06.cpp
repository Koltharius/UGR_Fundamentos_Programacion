#include <iostream>
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
      if (total_utilizados < TAMANIO){
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

   void AniadeString(string nuevo){
      int tope = nuevo.size();
      for(int i=0; i<tope; i++){
         Aniade(nuevo[i]);
      }
   }

   void EliminaMayusculas(){
      int i = 0;

      while(i < total_utilizados){
         if(isupper(vector_privado[i])){
            Elimina(i);
         }
         else{
            i++;
         }
      }
   }
};

int main(){
   SecuenciaCaracteres secuencia;
   secuencia.AniadeString("SoY yO");
   secuencia.EliminaMayusculas();

   int tope = secuencia.TotalUtilizados();

   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }

   cout << "\n\n";
}
