/*
   Autor: David Sanchez Jimenez
   Ejercicio 5 Relacion 3
   Descripcion: Funcion que calcula el salario de un trabajador
                en funcion de las horas trabajadas
   Necesita: Numero de horas totales trabajadas y precio/hora
   Calcula: num_horas * precio_hora
            Si el numero de horas se excede de 40 horas estas se consideraran horas extra y se cobraran al doble por lo que seria:
            (num_horas * precio_hora) + (horas_extra * (precio_hora * 2));
*/

#include <iostream>
using namespace std;

bool LeeOpcion2Alternativas(string mensaje){
   while(toupper(respuesta) != 'S' && toupper(respuesta) != 'N'){
      cout << MENSAJE;
      cin >> respuesta;
   }
}

int main() {

   // Declaracion de variables
   const string MENSAJE1 = "Es autonomo (S/N)";
   const string MENSAJE2 = "Es pensionista (S/N): ";

   char autonomo;
   char pensionista;
   char estado_civil;
   double renta_bruta;
   double retencion_inicial;
   double renta_final;
   double tope_renta = 20000;

   bool es_autonomo;
   bool es_pensionista;
   bool es_casado;
   bool renta_mayor;

   // Entrada de datos
   cout << MENSAJE1;
   cin >> MENSAJE1;

   cout << MENSAJE2;
   cin >> MENSAJE2;

   cout << "Soltero o Casado (S/C): ";
   cin >> estado_civil;

   cout << "Introduzca su Renta Bruta: ";
   cin >> renta_bruta;

   cout << "Retencion inicial a aplicar (en %): ";
   cin >> retencion_inicial;

   // computos
   autonomo = tolower(autonomo);
   pensionista = tolower(pensionista);
   estado_civil = tolower(estado_civil);

   es_autonomo = (autonomo == 's');
   es_pensionista = (pensionista == 's');
   es_casado = (estado_civil == 'c');
   renta_mayor = (renta_bruta > tope_renta);

   if(es_autonomo) { // Autonomos
      retencion_inicial = retencion_inicial - 3;
   }

   else {
      if(es_pensionista) { // Pensionistas
         retencion_inicial = retencion_inicial + 1;
      }

      else { // Resto de trabajadores
         retencion_inicial = retencion_inicial + 2;

         if (!renta_mayor) {
            retencion_inicial = retencion_inicial + 6;
         }

         if (es_casado && renta_mayor) {
            retencion_inicial = retencion_inicial + 8;
         }

         if (!es_casado && renta_mayor) {
            retencion_inicial = retencion_inicial + 10;
         }
      }
   }

   renta_final = renta_bruta - (renta_bruta * (retencion_inicial/100));

   // salida de datos
   cout << "\nLa renta total es: " << renta_final << "\n\n";

}
