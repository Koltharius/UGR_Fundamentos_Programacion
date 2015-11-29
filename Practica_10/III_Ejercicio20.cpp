#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.1415927;

class Gaussiana{
   private:
      double esperanza;
      double desviacion;

   public:
      Gaussiana(double esperanza, double desviacion){
         esperanza = esperanza;
         desviacion = desviacion;
      }

      double get_Esperanza(){
         return esperanza;
      }

      double get_desviacion(){
         return desviacion;
      }

      double Gauss(double x){
         return (exp(-0.5 * pow((x - esperanza) / desviacion, 2)) / (desviacion * sqrt(2 * PI)));
      }

      double CDF(double x){
         const double b0 = 0.2316419;
   		const double b1 = 0.319381530;
   		const double b2 = -0.356563782;
   		const double b3 = 1.781477937;
   		const double b4 = -1.821255978;
   		const double b5 = 1.330274429;

         double t = 1 / (1 + b0*x);
   		return (1 - Gauss(x) * (b1*t + b2*t*t + b3*t*t*t + b4*t*t*t*t));
      }
};

int main(){
   double esperanza, desviacion, x;
   double gaussiana, cdf;

   cout << "Introduzca el valor de la esperanza: ";
   cin >> esperanza;
   cout << "Introduzca el valor de la desviacion tipica: ";
   cin >> desviacion;
   cout << "Introduzca el valor de la abcisa: ";
   cin >> x;

   Gaussiana gauss(esperanza, desviacion);

   gaussiana = gauss.Gauss(x);
   cdf = gauss.CDF(x);

   cout << "\nEl valor de la gaussiana en " << x << " es " << gaussiana;
   cout << "\nEl valor de CDF(" << x << ") es " << cdf << "\n\n";
}
