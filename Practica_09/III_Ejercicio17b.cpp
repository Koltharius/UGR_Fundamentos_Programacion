#include <iostream>
#include <cmath>
using namespace std;

class Recta{
   public:
      double A = 0.0;
      double B = 0.0;
      double C = 0.0;

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
   Recta primera_recta;
   Recta segunda_recta;

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

   cout << "Introduzca un valor de ordenada: ";
   cin >> x;
   cout << "Introduzca el valor de abcisa: ";
   cin >> y;

   primera_recta.A = coef_x_primera_recta;
   primera_recta.B = coef_y_primera_recta;
   primera_recta.C = coef_z_primera_recta;

   segunda_recta.A = coef_x_segunda_recta;
   segunda_recta.B = coef_y_segunda_recta;
   segunda_recta.C = coef_z_segunda_recta;

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
