#include <iostream>
#include <cmath>
using namespace std;

class Recta{
   private:
      double A = 0.0;
      double B = 0.0;
      double C = 0.0;

      bool SonCorrectos(double coef_x, double coef_y){
         return !(coef_x == 0 && coef_y == 0);
      }

   public:
      Recta(double coef_x, double coef_y, double coef_indep){
         SetCoeficientes(coef_x, coef_y, coef_indep);
      }

      void SetCoeficientes(double coef_x, double coef_y, double coef_indep){
         if(SonCorrectos(coef_x, coef_y)){
            A = coef_x;
            B = coef_y;
            C = coef_indep;
         }
      }

      double coef_X(){
         return A;
      }

      double coef_Y(){
         return B;
      }

      double coef_indep(){
         return C;
      }

      double Pendiente(){
         return -A / B;
      }

      double Ordenada_en(double x){
         return (-C - x*A) / B;
      }

      double Abcisa_en(double y){
         return (-C - y*B) / A;
      }
};

int main() {
   double coef_x_primera_recta, coef_y_primera_recta,    coef_z_primera_recta;
   double coef_x_segunda_recta, coef_y_segunda_recta, coef_z_segunda_recta;
   double pendiente_primera_recta, pendiente_segunda_recta;
   double x, ordenada_de_x, y, abscisa_de_y;

   cout << "Introduzca los valores para la primera recta Ax + By + C = 0: ";
   cin >> coef_x_primera_recta;
   cin >> coef_y_primera_recta;
   cin >> coef_z_primera_recta;

   cout << "Introduzca los valores para la segunda recta Ax + By + C = 0: ";
   cin >> coef_x_segunda_recta;
   cin >> coef_y_segunda_recta;
   cin >> coef_z_primera_recta;

   Recta primera_recta(coef_x_primera_recta, coef_y_primera_recta, coef_z_primera_recta);

   primera_recta.SetCoeficientes(coef_x_primera_recta, coef_y_primera_recta, coef_z_primera_recta);

   Recta segunda_recta(coef_x_segunda_recta, coef_y_segunda_recta, coef_z_segunda_recta);

   segunda_recta.SetCoeficientes(coef_x_segunda_recta, coef_y_segunda_recta, coef_z_segunda_recta);

   cout << "Introduzca un valor de ordenada: ";
   cin >> x;
   cout << "Introduzca el valor de abcisa: ";
   cin >> y;

   pendiente_primera_recta = primera_recta.Pendiente();
   pendiente_segunda_recta = segunda_recta.Pendiente();

   ordenada_de_x = primera_recta.Ordenada_en(x);
   abscisa_de_y = primera_recta.Abcisa_en(y);

   cout << "\nPendiente de la recta 1: " << pendiente_primera_recta;
   cout << "\nPendiente de la recta 2: " << pendiente_segunda_recta;
   cout << "\nOrdenada de x en la recta 1: " << ordenada_de_x;
   cout << "\nAbcisa de y en la recta 1: " << abscisa_de_y;

   cout << endl << endl;
}
