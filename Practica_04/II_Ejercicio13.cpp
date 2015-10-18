/*
   Autor: David Sanchez Jimenez
   Ejercicio 13 Relacion 2
   Descripcion: Programa que calcula la renta final dependiendo
                de distintos parametros
   Necesita: Saber si eres autonomo o no,
             si eres casado o soltero,
             si eres juvilado,
             tu renta inicial y la retencion inicial
   Devuelve: La renta final de la persona
*/

#include <iostream>

using namespace std;

int main() {

   // Declaracion de variables
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
   cout << "Es autonomo (S/N): ";
   cin >> autonomo;

   cout << "Es pensionista (S/N): ";
   cin >> pensionista;

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
