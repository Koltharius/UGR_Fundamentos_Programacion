#include <iostream>
#include <cmath>
using namespace std;

class ProgresionGeometrica{
   private:
      double primer_termino;
      double razon;
   public:
      ProgresionGeometrica(double primer_termino, double razon){
         primer_termino = primer_termino;
         razon = razon;
      }

      double Primer_termino(){
         return primer_termino;
      }

      double Razon(){
         return razon;
      }

      double Termino(int n){
         return (primer_termino * pow(razon,n-1));
      }

      double Suma_Hasta(int tope){
         return (primer_termino * ((pow(razon,tope) - 1) / (razon-1)));
      }

      double Suma_Hasta_Inf(){
         return (primer_termino / (1 - razon));
      }

      double Multiplica_Hasta(int tope){
         return (sqrt (pow (primer_termino * Termino (tope), tope)));
      }
};

int main(){
   double primer_termino, razon;
   int tope;
   double suma, suma_inf, producto;

   cout << "Introduzca el primer termino de la progresion: ";
   cin >> primer_termino;
   cout << "Introduzca la razon de la progresion: ";
   cin >> razon;

   do{
      cout << "Indice mayor o igual a 1 del ultimo termino a sumar: ";
      cin >> tope;
   }while (tope < 1);

   ProgresionGeometrica progresion(primer_termino, razon);
   suma = progresion.Suma_Hasta(tope);
   cout << "\nEl resultado de la suma hasta " << tope << " es " << suma;

   if(abs(razon) < 1) {
      suma_inf = progresion.Suma_Hasta_Inf();
      cout << "\nEl resultado de la suma hasta infinito es " << suma_inf;
   }

   producto = progresion.Multiplica_Hasta(tope);
   cout << "\nEl resultado del producto hasta " << tope << " es " << producto << "\n\n";
}
