#include <iostream>
#include <cctype>
using namespace std;

class SecuenciaCaracteres{
private:
   static  const  int  TAMANIO  =  50;
   char  vector_privado[TAMANIO];
   int  total_utilizados;
public:
   SecuenciaCaracteres()
      :total_utilizados(0)
   {
   }

   int  TotalUtilizados(){
      return  total_utilizados;
   }

   void  Aniade(char  nuevo){
      if (total_utilizados  <  TAMANIO){
         vector_privado[total_utilizados]  =  nuevo;
         total_utilizados++;
      }
   }

   void AniadeCadena(string nuevo){
      int tope = nuevo.size();

      for (int i = 0; i < tope; i++)
         Aniade(nuevo[i]);
   }

   char Elemento(int  indice){
      return  vector_privado[indice];
   }

   void Modifica(int indice_componente, char nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
   }


   int PrimeraOcurrenciaEntre(int pos_izda, int pos_dcha, char buscado){
      int i = pos_izda;
      bool encontrado = false;

      while (i <= pos_dcha  &&  !encontrado)
         if (vector_privado[i] == buscado)
            encontrado = true;
         else
            i++;

      if (encontrado)
         return i;
      else
         return -1;
   }

   int PrimeraOcurrencia (char buscado){
      return PrimeraOcurrenciaEntre(0, total_utilizados - 1, buscado);
   }

   int NumeroOcurrencias(char a_buscar, int izda, int dcha){
      int numero_ocurrencias = 0;

      for (int i=izda; i <= dcha; i++)
         if (vector_privado[i] == a_buscar)
            numero_ocurrencias++;

      return numero_ocurrencias;
   }
};

int main(){
   const char TERMINADOR = '#';
   char caracter;
   SecuenciaCaracteres palabra;
   SecuenciaCaracteres otra_palabra;
   SecuenciaCaracteres procesados;
   bool es_similar;

   cin >> caracter;

   while (caracter != TERMINADOR){
      palabra.Aniade(caracter);
      cin >> caracter;
   }

   cin >> caracter;

   while (caracter != TERMINADOR){
      otra_palabra.Aniade(caracter);
      cin >> caracter;
   }

   if (palabra.TotalUtilizados() != otra_palabra.TotalUtilizados())
      es_similar = false;
   else{
      int ultimo = palabra.TotalUtilizados()  - 1;
      es_similar = palabra.Elemento(0) == otra_palabra.Elemento(0)
                    &&
                   palabra.Elemento(ultimo) == otra_palabra.Elemento(ultimo);

      for (int i=1; i<ultimo && es_similar; i++){
         char actual =  palabra.Elemento(i);

         if (procesados.PrimeraOcurrencia(actual) == -1){
            procesados.Aniade(actual);
            es_similar = palabra.NumeroOcurrencias(actual, 1, ultimo-1)
                          ==
                         otra_palabra.NumeroOcurrencias(actual, 1, ultimo-1);
         }
      }
   }

   if (es_similar){
      cout << "\nSon similares";
   }
   else{
      cout << "\nNo son similares";
   }

   cout << "\n\n";
}
