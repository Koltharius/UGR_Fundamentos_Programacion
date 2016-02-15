#include <iostream>
#include <cctype>
// #include <chrono>
using namespace std;

// class Cronometro{
// private:
//    typedef std::chrono::time_point<std:::chrono::steady_clock> Punto_en_el_Tiempo;
//    typedef chrono::duration <double, nano> IntervaloTiempo;
//
//    Punto_en_el_Tiempo inicio;
//    Punto_en_el_Tiempo final;
//
// public:
//    void Reset(){
//       inicio = chrono::steady_clock::now();
//    }
//
//    double MiliSegundosTranscurridos(){
//       final = chrono::steady_clock::now();
//       IntervaloTiempo diferencia = final - inicio;
//
//       return diferencia.count() / 1e+6;
//    }
// };

class SecuenciaCaracteres {
private:
   static const int TAMANIO = 2500000;
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
      int pos_esc = 0;
      int pos_lec = 0;

      while(pos_lec < total_utilizados){
         if(!isupper(vector_privado[pos_lec])){
            vector_privado[pos_esc] = vector_privado[pos_lec];
            pos_esc++;
         }

         pos_lec++;
      }

      total_utilizados = pos_esc;
   }
};

int main(){
   const char TERMINADOR = '#';
   SecuenciaCaracteres secuencia;

   char caracter = cin.get();

   while (caracter != TERMINADOR){
      secuencia.Aniade(caracter);
      caracter = cin.get();
   }

   secuencia.EliminaMayusculas();

   int tope = secuencia.TotalUtilizados();

   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }

   cout << "\n\n";
}
