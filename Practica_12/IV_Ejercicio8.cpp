#include <iostream>
#include <cctype>
using namespace std;

#include <iostream>
using namespace std;

class SecuenciaCaracteres{
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

   void EliminaTodos(){
      total_utilizados = 0;
   }

   void Aniade(char nuevo){
      if(total_utilizados < TAMANIO){
         vector_privado[total_utilizados] = nuevo;
         total_utilizados++;
      }
   }

   void Modifica(int posicion, char nuevo){
      if(posicion >= 0 && posicion < total_utilizados){
         vector_privado[posicion] = nuevo;
      }
   }

   char Elemento(int indice){
      return vector_privado[indice];
   }

   string ToString(){
      string cadena;

      for(int i=0; i<total_utilizados; i++){
         cadena = cadena + vector_privado[i];
      }

      return cadena;
   }

   int PrimeraOcurrenciaEntre (int pos_izda, int pos_dcha, char buscado){
      int i = pos_izda;
      bool encontrado = false;

      while (i <= pos_dcha  &&  !encontrado)
         if (vector_privado[i] == buscado)
            encontrado = true;
         else
            i++;

      if (encontrado){
         return i;
      }
      else{
         return -1;
      }
   }

   int PrimeraOcurrencia(char buscado){
      return PrimeraOcurrenciaEntre(0, total_utilizados-1, buscado);
   }

   int PosicionMinimoEntre(int izda, int dcha){
      int posicion_minimo = -1;
      char minimo;

      minimo = vector_privado[izda];
      posicion_minimo = izda;

      for (int i = izda+1 ; i <= dcha ; i++)
         if (vector_privado[i] < minimo){
            minimo = vector_privado[i];
            posicion_minimo = i;
         }

      return posicion_minimo;
   }

   int PosicionMinimo(){
      return PosicionMinimoEntre(0, total_utilizados - 1);
   }

   int BusquedaBinaria (char buscado){
      int izda, dcha, centro;
      bool encontrado = false;

      izda = 0;
      dcha = total_utilizados - 1;
      centro = (izda + dcha) / 2;

      while (izda <= dcha  &&  !encontrado){
         if (vector_privado[centro] == buscado)
            encontrado = true;
         else if (buscado < vector_privado[centro])
            dcha = centro - 1;
         else
            izda = centro + 1;

         centro = (izda + dcha) / 2;
      }

      if (encontrado)
         return centro;
      else
         return -1;
   }

   void Inserta(int pos_insercion, char valor_nuevo){
      if (total_utilizados < TAMANIO  &&  pos_insercion >= 0
         &&  pos_insercion <= total_utilizados){

         for (int i = total_utilizados ; i > pos_insercion ; i--)
            vector_privado[i] = vector_privado[i-1];

         vector_privado[pos_insercion] = valor_nuevo;
         total_utilizados++;
      }
   }

   void Elimina (int posicion){
      if (posicion >= 0 && posicion < total_utilizados){
         int tope = total_utilizados-1;

         for (int i = posicion ; i < tope ; i++)
            vector_privado[i] = vector_privado[i+1];

         total_utilizados--;
      }
   }

   // Apartado A
   void EliminaRepetidos_Vector_Local(){
      char sin_repetidos[TAMANIO];
      bool encontrado;
      int repetidos;

      if(total_utilizados > 0){
         sin_repetidos[0] = vector_privado[0];
         repetidos = 1;

         for(int actual = 1; actual < total_utilizados; actual++){
				encontrado = false;
				for(int j = 0; j < repetidos && !encontrado; j++){
					if(vector_privado[actual] == sin_repetidos[j])
						encontrado = true;
				}

				if (!encontrado){
					sin_repetidos[repetidos] = vector_privado[actual];
					repetidos++;
				}
			}

			for (int i=0; i<repetidos; i++){
				vector_privado[i] = sin_repetidos[i];
         }

			total_utilizados = repetidos;
      }
   }

   // Apartado B
   void EliminaRepetidos(){
      int i=1;
      int pos_encontrado;

      while(i<total_utilizados){
         pos_encontrado = PrimeraOcurrenciaEntre(0, i-1, vector_privado[i]);
         if(pos_encontrado != -1){
            Elimina(i);
         }
         else{
            i++;
         }
      }
   }
};

int main(){
   int tope;
   SecuenciaCaracteres secuencia;

   cout << "\n\nApartado a): \n\n";

   secuencia.Aniade('b');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('h');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('c');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('g');

   tope = secuencia.TotalUtilizados();
   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }
   cout << "\n";
   secuencia.EliminaRepetidos_Vector_Local();
   tope = secuencia.TotalUtilizados();
   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }

   secuencia.EliminaTodos();

   cout << "\n\nApartado b): \n\n";

   secuencia.Aniade('b');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('h');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('c');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('a');
   secuencia.Aniade('g');

   tope = secuencia.TotalUtilizados();
   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }
   cout << "\n";
   secuencia.EliminaRepetidos();
   tope = secuencia.TotalUtilizados();
   for(int i=0; i<tope; i++){
     cout << secuencia.Elemento(i) << " ";
   }

   cout << "\n\n";
}
