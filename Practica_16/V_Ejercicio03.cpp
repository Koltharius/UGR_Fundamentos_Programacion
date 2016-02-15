#include <iostream>
using namespace std;

class SecuenciaReales{
private:
   static  const  int  TAMANIO  =  50;
   double  vector_privado[TAMANIO];
   int  total_utilizados;
public:
   SecuenciaReales()
      :total_utilizados(0)
   {
   }

   int  TotalUtilizados(){
      return  total_utilizados;
   }

   void  Aniade(double  nuevo){
      if (total_utilizados  <  TAMANIO){
         vector_privado[total_utilizados]  =  nuevo;
         total_utilizados++;
      }
   }

   double Elemento(int  indice){
      return  vector_privado[indice];
   }

   void Modifica(int indice_componente, double nuevo){
      if (indice_componente >= 0  &&  indice_componente < total_utilizados)
         vector_privado[indice_componente] = nuevo;
   }

   void EliminaTodos(){
      total_utilizados = 0;
   }

   int PrimeraOcurrenciaEntre(int pos_izda, int pos_dcha, double buscado){
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

   int PrimeraOcurrencia (double buscado){
      return PrimeraOcurrenciaEntre(0, total_utilizados - 1, buscado);
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

class MatrizCuadradaReales{
private:
   static const int MAX_FILAS_COLUMNAS = 40;
   double matriz_privada[MAX_FILAS_COLUMNAS][MAX_FILAS_COLUMNAS];
   const int util_fil_col = 0;
   int indice_ultima_fila_aniadida = -1;

   void AsignaFila (SecuenciaReales fila, int indice_fila){
      for (int i=0; i < util_fil_col; i++)
         matriz_privada[indice_fila][i] = fila.Elemento(i);
   }
public:
   MatrizCuadradaReales(SecuenciaReales primera_fila)
      :util_fil_col(primera_fila.TotalUtilizados())
   {
      AniadeFila(primera_fila);
      indice_ultima_fila_aniadida = 0;
   }

	MatrizCuadradaReales(int numero_columnas)
      :util_fil_col(numero_columnas)
   {
   }

   double Elemento (int fil, int col){
      return matriz_privada[fil][col];
   }

   int NumeroFilas_y_Columnas(){
      return util_fil_col;
   }

   bool EsCuadrada(){
      return util_fil_col == indice_ultima_fila_aniadida + 1;
   }

   void AniadeFila(SecuenciaReales nueva_fila){
      if (indice_ultima_fila_aniadida < MAX_FILAS_COLUMNAS){
         if (nueva_fila.TotalUtilizados() == util_fil_col){
            indice_ultima_fila_aniadida++;
            AsignaFila(nueva_fila, indice_ultima_fila_aniadida);
         }
      }
   }

   SecuenciaReales Fila(int indice_fila){
      SecuenciaReales fila;

      for (int i=0; i < util_fil_col; i++){
         fila.Aniade(matriz_privada[indice_fila][i]);
      }
      return fila;
   }

   MatrizCuadradaReales SuavizadaPromedio(){
      MatrizCuadradaReales suavizada (util_fil_col);
      double suma;

      for (int i=0; i < util_fil_col; i++){
         suavizada.matriz_privada[i][i] = matriz_privada[i][i];
         suma = 0;

         for (int j=util_fil_col - 1 ; j > i; j--){
            suma = suma + matriz_privada[i][j];
            suavizada.matriz_privada[i][j] = suma / (util_fil_col - j);
            suavizada.matriz_privada[j][i] = suavizada.matriz_privada[i][j];
         }
      }

      return suavizada;
   }
};


int main(){
   int util_filas_matriz, util_filas_suavizada;
   double valor;
   SecuenciaReales fila;

   cin >> util_filas_matriz;

   MatrizCuadradaReales matriz(util_filas_matriz);

   for (int i=0; i<util_filas_matriz; i++){
      for (int j=0; j<util_filas_matriz; j++){
         cin >> valor;
         fila.Aniade(valor);
      }

      matriz.AniadeFila(fila);
      fila.EliminaTodos();
   }

   if (matriz.EsCuadrada()){
      MatrizCuadradaReales suavizada(matriz.SuavizadaPromedio());
      util_filas_suavizada = suavizada.NumeroFilas_y_Columnas();

      cout << "\n\n";
      cout << "Matriz suavizada:\n";

      for (int i=0; i<util_filas_suavizada; i++){
         cout << "\n";
         for (int j=0; j<util_filas_suavizada; j++)
            cout << suavizada.Elemento(i,j) << '\t';
      }
   }

   cout << "\n\n";
}
