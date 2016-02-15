#include <iostream>
#include <string>
using namespace std;

class SecuenciaEnteros{
private:
   static  const  int  TAMANIO  =  50;
   int  vector_privado[TAMANIO];
   int  total_utilizados;
public:
   SecuenciaEnteros()
      :total_utilizados(0)
   {
   }

   int  TotalUtilizados(){
      return  total_utilizados;
   }

   void  Aniade(int  nuevo){
      if (total_utilizados  <  TAMANIO){
         vector_privado[total_utilizados]  =  nuevo;
         total_utilizados++;
      }
   }

   int Elemento(int  indice){
      return  vector_privado[indice];
   }

   void Ordena_por_Insercion(){
      int izda, i;
      int a_desplazar;

      for (izda = 1; izda < total_utilizados; izda++){
         a_desplazar = vector_privado[izda];

         for (i = izda; i>0 && a_desplazar < vector_privado[i-1]; i--)
            vector_privado[i] = vector_privado[i-1];

         vector_privado[i] = a_desplazar;
      }
   }
};

int LeeEntero_en_Rango (int inferior, int superior){
   int entero;
   bool en_rango;

   do{
      cin >> entero;
      en_rango = inferior <= entero && entero <= superior;
   }while (! en_rango);

   return entero;
}

int main(){
   const int MAX_CARACTERES = 50;
   char palabra[MAX_CARACTERES];
   int numero_de_caracteres, total_a_aliminar;
   SecuenciaEnteros a_eliminar;
   int lectura, escritura, i;

   numero_de_caracteres = LeeEntero_en_Rango(0, MAX_CARACTERES);

   for (int i=0; i<numero_de_caracteres; i++)
      palabra[i] = cin.get();

   total_a_aliminar = LeeEntero_en_Rango(0, numero_de_caracteres);

   for (int i=0; i<total_a_aliminar; i++){
      int posicion;
      cin >> posicion;
      a_eliminar.Aniade(posicion);
   }

   if (total_a_aliminar > 0){
      a_eliminar.Ordena_por_Insercion();
      escritura = 0;
      i = 0;

      for (lectura = 0; lectura < numero_de_caracteres; lectura++){
         if (lectura != a_eliminar.Elemento(i)){
            palabra[escritura] = palabra[lectura];
            escritura++;
         }
         else{
            i++;
         }
      }

      numero_de_caracteres = numero_de_caracteres - total_a_aliminar;
   }

   for (int i=0; i<numero_de_caracteres; i++){
      cout << palabra[i];
   }

   cout << "\n\n";
}
