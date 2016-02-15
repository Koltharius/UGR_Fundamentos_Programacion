#include <iostream>
#include <string>
using namespace std;

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

   void Modifica(int indice_componente, char nuevo){
      if(indice_componente >= 0 && indice_componente < total_utilizados){
         vector_privado[indice_componente] = nuevo;
      }
   }

   int PrimeraOcurrenciaEntre(int pos_izda, int pos_dcha, char buscado){
      int i = pos_izda;
      bool encontrado = false;

      while(i <= pos_dcha && !encontrado){
         if(vector_privado[i] == buscado){
            encontrado = true;
         }
         else{
            i++;
         }
      }
      if(encontrado){
         return i;
      }
      else{
         return -1;
      }
   }

   int PrimeraOcurrencia(char buscado){
      return PrimeraOcurrenciaEntre(0, total_utilizados -1, buscado);
   }

   void Reemplaza(int inicio, int n_a_quitar, SecuenciaCaracteres a_insertar){
      int diferencia_componentes, tamanio_a_insertar, lectura, escritura, siguiente;

      tamanio_a_insertar = a_insertar.TotalUtilizados();

      if(tamanio_a_insertar + total_utilizados <= TAMANIO && n_a_quitar <= total_utilizados - inicio && inicio <= total_utilizados){

         diferencia_componentes = tamanio_a_insertar - n_a_quitar;

         if(diferencia_componentes < 0){
            siguiente = 1;
            lectura = inicio + n_a_quitar;
            escritura = inicio + tamanio_a_insertar;
         }
         else{
            siguiente = -1;
            lectura = total_utilizados - 1;
            escritura = total_utilizados - 1 + diferencia_componentes;
         }

         int numero_componentes_a_desplazar = total_utilizados - n_a_quitar - inicio;

         for(int i=0; i < numero_componentes_a_desplazar; i++){
            vector_privado[escritura] = vector_privado[lectura];
            lectura = lectura + siguiente;
            escritura = escritura + siguiente;
         }

         for(int i=0; i<tamanio_a_insertar; i++){
            vector_privado[inicio+i] = a_insertar.Elemento(i);
         }
      }
      total_utilizados = total_utilizados + diferencia_componentes;
   }
};

int main(){
   SecuenciaCaracteres palabra;
   SecuenciaCaracteres para_insertar;

   palabra.AniadeCadena("abcdefgh");
   para_insertar.AniadeCadena("jklmn");

   int tope = palabra.TotalUtilizados();

   for(int i=0; i<tope; i++){
      cout << palabra.Elemento(i);
   }
   cout << endl;

   palabra.Reemplaza(1,3,para_insertar);

   tope = palabra.TotalUtilizados();

   for(int i=0; i<tope; i++){
      cout << palabra.Elemento(i);
   }

   cout << "\n\n";
}
