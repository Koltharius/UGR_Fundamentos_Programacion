#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL=50, MAX_COL=30;
   double matriz[MAX_FIL][MAX_COL];
   double suavizada[MAX_FIL][MAX_COL];
   int util_filas_matriz, util_filas_suavizada;
   double suma, media;

   cin >> util_filas_matriz;

   for(int i=0; i<util_filas_matriz; i++){
      for(int j=0; j<util_filas_matriz; j++){
         cin >> matriz[i][j];
      }
   }

   for(int i=0; i<util_filas_matriz; i++){
      suavizada[i][i] = matriz[i][i];
      suma = 0;
      for(int j=util_filas_matriz - 1; j>i; j--){
         suma += matriz[i][j];
         suavizada[i][j] = suma / (util_filas_matriz - j);
         suavizada[j][i] = suavizada[i][j];
      }
   }

   util_filas_suavizada = util_filas_matriz;

   cout << "\n\n";
   cout << "Matriz suavizada:\n";
   for(int i=0; i<util_filas_suavizada; i++){
      cout << endl;
      for(int j=0; j<util_filas_suavizada; j++){
         cout << suavizada[i][j] << "\t";
      }
   }

   cout << endl << endl;
   return 0;
}
