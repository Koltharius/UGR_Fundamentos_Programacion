#include <iostream>
#include <random>
#include <chrono>
using namespace std;

class GeneradorAleatorioEnteros{
private:
   mt19937 generador_mersenne;
   uniform_int_distribution<int>  distribucion_uniforme;
public:
   GeneradorAleatorioEnteros()
      :GeneradorAleatorioEnteros(0, 1){
   }
   GeneradorAleatorioEnteros(int min, int max){
      auto semilla =
         chrono::high_resolution_clock::now().time_since_epoch().count();
      generador_mersenne.seed(semilla);
      distribucion_uniforme = uniform_int_distribution<int> (min, max);
   }
   double Siguiente(){
      return distribucion_uniforme(generador_mersenne);
   }
};

class TableroBuscaMinas{
private:
   static const int FILAS = 5;
   static const int COLUMNAS = 3;
   bool tablero[FILAS][COLUMNAS];

   bool EnRango(int fil, int col){
      return 0 <= fil && fil < FILAS && 0 <= col && col < COLUMNAS;
   }
public:
   TableroBuscaMinas(){
      for (int i=0; i<FILAS; i++)
         for (int j=0; j<COLUMNAS; j++)
            tablero[i][j] = false;
   }

   void AsignaMina (int fil, int col){
      if (EnRango(fil, col))
         tablero[fil][col] = true;
   }

   int MaxFilas(){
      return FILAS;
   }

   int MaxColumnas(){
      return COLUMNAS;
   }

   int NumeroMinasAlrededor(int fil, int col){
      int numero_minas = 0;

      if (EnRango(fil, col)){
         if (tablero[fil][col])
            numero_minas = -1;
         else{
            for (int i = -1; i <= 1; i++) {
               for (int j = -1; j <= 1; j++){
                  if (! (i == 0 && j == 0)) {
                     int fil_alrededor = fil + i;
                     int col_alrededor = col + j;
                     if(EnRango(fil_alrededor, col_alrededor) && tablero[fil_alrededor][col_alrededor])
                     numero_minas++;
                  }
               }
            }
         }
      }

      return numero_minas;
   }
};

int LeeEntero_en_Rango (int inferior, int superior){
   int entero;
   bool en_rango;

   do{
      cin >> entero;
      en_rango = inferior <= entero && entero <= superior;
   } while (! en_rango);

   return entero;
}

int main(){
   TableroBuscaMinas tablero;
   int max_numero_minas;
   int numero_minas_a_generar;
   int filas_tablero, columnas_tablero;

   filas_tablero = tablero.MaxFilas();
   columnas_tablero = tablero.MaxColumnas();
   max_numero_minas = filas_tablero * columnas_tablero;
   numero_minas_a_generar = LeeEntero_en_Rango(1, max_numero_minas);

   GeneradorAleatorioEnteros aleat_filas(0, filas_tablero - 1);
   GeneradorAleatorioEnteros aleat_columnas(0, columnas_tablero - 1);

   for(int i=1; i <= numero_minas_a_generar; i++){
      int fila_aleatoria = aleat_filas.Siguiente();
      int columna_aleatoria = aleat_columnas.Siguiente();
      tablero.AsignaMina(fila_aleatoria , columna_aleatoria);
   }

   cout << "\n\n";
   cout << "Minas alrededor:\n";

   for (int i=0; i<filas_tablero; i++){
      cout << "\n";
      for (int j=0; j<columnas_tablero; j++)
         cout << tablero.NumeroMinasAlrededor(i,j) << '\t';
   }

   cout << "\n\n";
}
