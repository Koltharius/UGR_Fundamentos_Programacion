/*
   Autor: David Sanchez Jimenez
   Ejercicio 6 Relacion 3
   Descripcion: Funcion que calcula el salario de un trabajador
                en funcion de las horas trabajadas
   Necesita: Numero de horas totales trabajadas y precio/hora
   Calcula: num_horas * precio_hora
            Si el numero de horas se excede de 40 horas estas se consideraran horas extra y se cobraran al doble por lo que seria:
            (num_horas * precio_hora) + (horas_extra * (precio_hora * 2));
*/

#include <iostream>
using namespace std;

double Calculo_Salario(double horas_trabajadas, double precio_hora){
   double sueldo;
   double horas_extra;
   double limite_horas = 40;

   if(horas_trabajadas < limite_horas){
      sueldo = horas_trabajadas * precio_hora;
   }

   else{
      horas_extra = horas_trabajadas - limite_horas;
      horas_trabajadas = horas_trabajadas - horas_extra;
      sueldo = (horas_trabajadas * precio_hora) + (horas_extra * (precio_hora * 2));
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
