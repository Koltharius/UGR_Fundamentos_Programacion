/*
   Autor: David Sanchez Jimenez
   Ejercicio 12 Relacion 3
   Descripcion: Funcion que calcula la gaussiana y el CDF
   Necesita: El valor de x, la esperanza y la desviacion
   Calcula: El valor de la gaussiana y el valor del CFD
*/

#include <iostream>
#include <cmath>

using namespace std;

const double PI = 3.141592;

double Gaussiana(double x, double esperanza, double desviacion){
   return (exp(-0.5 * pow((x - esperanza) / desviacion, 2)) / (desviacion * sqrt(2 * PI)));
}

double CDF(double x, double esperanza, double desviacion){
   const double b0 = 0.2316419;
   const double b1 = 0.319381530;
   const double b2 = -0.356563782;
   const double b3 = 1.781477937;
   const double b4 = -1.821255978;
   const double b5 = 1.330274429;

   double t = 1.0 / (1 + b0*x);
   double gauss = Gaussiana(x, esperanza, desviacion);

   return (1- gauss * (b1*t + b2*t*t + b3*t*t*t + b4*t*t*t*t + b5*t*t*t*t));
}

int main(){
   double esperanza, desviacion, x;
   double gauss, cdf;

   cout << "Introduzca el valor de la esperanza: ";
   cin >> esperanza;
   cout << "Introduzca el valor de la desviacion tipica: ";
   cin >> desviacion;
   cout << "Introduzca el valor de la abcisa: ";
   cin >> x;

   gauss = Gaussiana(x, esperanza, desviacion);
   cdf = CDF(x, esperanza, desviacion);

   cout << "\nEl valor de la gaussiana en " << x << " es " << gauss;
   cout << "\nEl valor de CDF(" << x << ") es " << cdf << "\n\n";
}
