#include <iostream>
#include <cmath>
using namespace std;

class Recta{
   public:
      double A = 0.0;
      double B = 0.0;
      double C = 0.0;
};

int main() {
   Recta primera_recta;
   Recta segunda_recta;

   double coef_x_primera_recta, coef_y_primera_recta,    coef_z_primera_recta;
   double coef_x_segunda_recta, coef_y_segunda_recta, coef_z_segunda_recta;
   double pendiente_primera_recta, pendiente_segunda_recta;

   cout << "Introduzca los valores para la primera recta Ax + By + C = 0: ";
   cin >> coef_x_primera_recta;
   cin >> coef_y_primera_recta;
   cin >> coef_z_primera_recta;

   cout << "Introduzca los valores para la segunda recta Ax + By + C = 0: ";
   cin >> coef_x_segunda_recta;
   cin >> coef_y_segunda_recta;
   cin >> coef_z_primera_recta;

   primera_recta.A = coef_x_primera_recta;
   primera_recta.B = coef_y_primera_recta;
   primera_recta.C = coef_z_primera_recta;

   segunda_recta.A = coef_x_segunda_recta;
   segunda_recta.B = coef_y_segunda_recta;
   segunda_recta.C = coef_z_segunda_recta;

   pendiente_primera_recta = - primera_recta.A / primera_recta.B;
   pendiente_segunda_recta = - segunda_recta.A / segunda_recta.B;

   cout << "\nPendiente de la recta 1: " << pendiente_primera_recta;
   cout << "\nPendiente de la recta 2: " << pendiente_segunda_recta;

   cout << endl << endl;
}
