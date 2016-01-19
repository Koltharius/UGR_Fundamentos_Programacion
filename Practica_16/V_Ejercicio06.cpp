#include <iostream>
#include <string>
using namespace std;

class SecuenciaEnteros{
private:
   static const int TAMANIO = 50;
   int vector_privado[TAMANIO];
   int total_utilizados;

public:
   SecuenciaEnteros()
      :total_utilizados(0)
   {
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

   void Ordena_por_Insercion(){
      int izda, i, a_desplazar;

      for(izda = 1; izda < total_utilizados; izda++){
         a_desplazar = vector_privado[izda];
         for(i=izda; i>0 && a_desplazar < vector_privado[i-1]; i--){
            vector_privado[i] = vector_privado[i-1];
         }
         vector_privado[i] = a_desplazar;
      }
   }
};

class SecuenciaCaracteres{
private:
   static const int TAMANIO = 50;
   char vector_privado[TAMANIO];
   int total_utilizados;

public:
   SecuenciaCaracteres()
      :total_utilizados(0)
      {
      }

   int TotalUtilizados(){
      return total_utilizados;
   }

   void Aniade(char nuevo){
      if(total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   void AniadeCadena(string nuevo){
      int tope = nuevo.size();
      for(int i=0; i<tope; i++){
         Aniade(nuevo[i]);
      }
   }

   char Elemento(int indice){
      return vector_privado[indice];
   }

   void EliminaVarios(SecuenciaEnteros a_eliminar){
      int lectura, escritura, i, utilizados_a_eliminar;
      utilizados_a_eliminar = a_eliminar.TotalUtilizados();
      if(utilizados_a_eliminar > 0){
         a_eliminar.Ordena_por_Insercion();
         escritura = 0;
         i = 0;

         for(lectura=0; lectura<total_utilizados; lectura++){
            if(lectura != a_eliminar.Elemento(i)){
               vector_privado[escritura] = vector_privado[lectura];
               escritura++;
            }
            else{
               i++;
            }
         }
         total_utilizados = total_utilizados - utilizados_a_eliminar;
      }
   }
};

int main(){
   SecuenciaCaracteres palabra;
   SecuenciaEnteros a_eliminar;

   palabra.AniadeCadena("abcdefgh");
   a_eliminar.Aniade(3);
   a_eliminar.Aniade(5);
   a_eliminar.Aniade(1);
   a_eliminar.Aniade(0);

   int tope = palabra.TotalUtilizados();
   for(int i=0; i<tope; i++){
      cout << palabra.Elemento(i);
   }

   cout << endl;

   palabra.EliminaVarios(a_eliminar);

   tope = palabra.TotalUtilizados();
   for(int i=0; i<tope; i++){
      cout << palabra.Elemento(i);
   }

   cout << endl << endl;
}
