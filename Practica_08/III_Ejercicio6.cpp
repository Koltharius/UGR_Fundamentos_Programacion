#include <iostream>
using namespace std;

double Calculo_Salario(double horas_trabajadas, double precio_hora){
   double sueldo;
   double horas_extra;
   double limite_horas = 40;

   if(horas_trabajadas > limite_horas){
      horas_extra = horas_trabajadas - limite_horas;

      sueldo = ((horas_trabajadas - limite_horas) * precio_hora) + (horas_extra * (precio_hora * 2));
   }

   else{
      sueldo = horas_trabajadas * precio_hora;
   }

   return sueldo;
}

int main(){
   double horas_trabajadas, precio_hora, sueldo;

   cout << "Introduzca las horas totales trabajadas: ";
   cin >> horas_trabajadas;
   cout << "Introduzca el precio por hora: ";
   cin >> precio_hora;

   sueldo = Calculo_Salario(horas_trabajadas, precio_hora);

   cout << "\nEl salario total es " << sueldo << " euros.\n\n";
}
