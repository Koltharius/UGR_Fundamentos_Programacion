#include <iostream>
using namespace std;

class SecuenciaEnteros{
private:
   static const int TAMANIO = 50;
   int vector_privado[TAMANIO];
   int total_utilizados;

public:
   SecuenciaEnteros()
      :total_utilizados(0){
   }

   int TotalUtilizados(){
      return total_utilizados;
   }

   void Aniade(int nuevo){
      if(total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   int Elemento(int indice){
      return vector_privado[indice];
   }

   void Modifica(int posicion, char nuevo){
      if(posicion >= 0 && posicion < total_utilizados){
         vector_privado[posicion] = nuevo;
      }
   }

   int NumeroSecuencias(){
      int num_secuencias = 0;

      if(total_utilizados > 0){
         num_secuencias = 1;

         for(int i=0; i<total_utilizados; i++){
            if(vector_privado[i-1] > vector_privado[i]){
               num_secuencias++;
            }
         }
      }
      return num_secuencias;
   }
};

int main(){
   SecuenciaEnteros secuencia;
   secuencia.Aniade(2);
   secuencia.Aniade(4);
   secuencia.Aniade(1);
   secuencia.Aniade(1);
   secuencia.Aniade(7);
   secuencia.Aniade(2);
   secuencia.Aniade(1);

   cout << "\nHay " << secuencia.NumeroSecuencias() << " secuencias.";

   cout << "\n\n";
}
