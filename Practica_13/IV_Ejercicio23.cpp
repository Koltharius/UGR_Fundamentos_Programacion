#include <iostream>
using namespace std;

int main(){
   const int MAX_FIL = 20, MAX_COL = 20;
   double matriz[MAX_FIL][MAX_COL];
   int util_filas, util_columnas;

   // Primera Matriz
   cin >> util_filas;
   cin >> util_columnas;

   for(int i=0; i<util_filas; i++){
      for(int j=0; j<util_columnas; j++){
         cin >> matriz[i][j];
      }
   }

   cout << "\nLa matriz introducida es:";
   for(int i=0; i<util_filas; i++){
      cout << endl;
      for(int j=0; j<util_columnas; j++){
         cout << matriz[i][j] << " ";
      }
   }

   // Matriz Transpuesta:
   double matriz_transpuesta[MAX_COL][MAX_FIL];
   int util_filas_trans, util_columnas_trans;

   util_filas_trans = util_filas;
   util_columnas_trans = util_columnas;

   for(int i=0; i<util_filas_trans; i++){
      for(int j=0; j<util_columnas_trans; j++){
         matriz_transpuesta[i][j] = matriz[j][i];
      }
   }

   cout << "\n\nLa matriz transpuesta es:";

   for(int i=0; i<util_filas_trans; i++){
      cout << endl;
      for(int j=0; j<util_columnas_trans; j++){
         cout << matriz_transpuesta[i][j] << " ";
      }
   }

   // Segunda Matriz
   double segunda_matriz[MAX_FIL][MAX_COL];
   int util_filas_seg, util_columnas_seg;

   util_filas_seg = util_filas;
   util_columnas_seg = util_columnas;

   for(int i=0; i<util_filas_seg; i++){
      for(int j=0; j<util_columnas_seg; j++){
         cin >> segunda_matriz[i][j];
      }
   }

   cout << "\n\nLa segunda matriz introducida es:\n";
   for(int i=0; i<util_filas_seg; i++){
      cout << endl;
      for(int j=0; j<util_columnas_seg; j++){
         cout << segunda_matriz[i][j] << " ";
      }
   }

   // Matriz Producto
   double matriz_producto[MAX_FIL][MAX_COL];
   int util_filas_prod, util_columnas_prod;

   util_filas_prod = util_filas;
   util_columnas_prod = util_columnas;

   for(int i=0; i<util_filas_prod; i++){
      for(int j=0; j<util_columnas_prod;j++){
         matriz_producto[i][j] = 0;

         for(int k=0; k<util_columnas_prod; k++){
            matriz_producto[i][j] += matriz[i][k] * segunda_matriz[k][j];
         }
      }
   }

   cout << "\n\nEl producto de ambas matrices es:";
   for(int i=0; i<util_filas_prod; i++){
      cout << endl;
      for(int j=0; j<util_columnas_prod; j++){
         cout << matriz_producto[i][j] << " ";
      }
   }

   cout << endl;
}
