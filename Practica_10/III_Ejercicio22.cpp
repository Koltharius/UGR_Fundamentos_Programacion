#include <iostream>
using namespace std;

class Nomina{
   private:
      double incremento_horas_extra = 0.5;
      double horas_no_extra = 40;
      double horas_trabajadas;
      double precio_hora;

   public:
      Nomina(double horas_trabajadas, double precio_hora){
         horas_trabajadas = horas_trabajadas;
         precio_hora = precio_hora;
      }

      void set_incremento_horas_extra(double incremento_horas_extra){
         incremento_horas_extra = incremento_horas_extra;
      }

      double get_incremento_horas_extra(){
         return horas_no_extra;
      }

      void set_horas_no_extra(double horas_no_extra){
         horas_no_extra = horas_no_extra;
      }

      double get_horas_no_extra(){
         return horas_no_extra;
      }

      double Calculo_Salario(double horas_trabajadas, double precio_hora){
         if(horas_trabajadas < horas_no_extra){
            return (horas_trabajadas * precio_hora);
         }

         else{
            return((horas_trabajadas * precio_hora) + ((horas_trabajadas - horas_no_extra) * (precio_hora * incremento_horas_extra)));
         }
      }
};

int main(){
   double horas_trabajadas, precio_hora;
   double sueldo;

   cout << "Introduzca las horas totales trabajadas: ";
   cin >> horas_trabajadas;
   cout << "Introduzca el precio por hora: ";
   cin >> precio_hora;

   Nomina nomina(horas_trabajadas, precio_hora);
   sueldo = nomina.Calculo_Salario(horas_trabajadas, precio_hora);

   cout << "\nEl salario total es " << sueldo << " euros.\n\n";
}
