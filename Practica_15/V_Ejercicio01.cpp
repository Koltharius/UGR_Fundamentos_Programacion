#include <iostream>
#include <cmath>
using namespace std;
const double PI=3.1415927;

bool SonIguales(double uno, double otro){
   return abs(uno-otro) <= 1e-6;
}

/*******************************************************************/
// Punto2D
/*******************************************************************/

class Punto2D{
private:
   double abscisa;
   double ordenada;
public:
   Punto2D(double abscisaPunto, double ordenadaPunto){
      SetCoordenadas(abscisaPunto, ordenadaPunto);
   }

   double Abscisa(){
      return abscisa;
   }

   double Ordenada(){
      return ordenada;
   }

   void SetCoordenadas(double abscisaPunto, double ordenadaPunto){
      if(!SonIguales(abscisaPunto, ordenadaPunto)){
         abscisa = abscisaPunto;
         ordenada = ordenadaPunto;
      }
   }

   bool EsIgual_a(Punto2D otro_punto){
      return(SonIguales(abscisa, otro_punto.abscisa) && SonIguales(ordenada, otro_punto.ordenada));
   }
};

/*******************************************************************/
// SegmentoDirigido
/*******************************************************************/

class SegmentoDirigido{
private:
   double x_1 = 0.0,
          y_1 = 0.0,
          x_2 = 0.0,
          y_2 = 0.0;

   bool SonCorrectos(double origen_abscisa, double origen_ordenada, double final_abscisa,  double final_ordenada){
      return !(origen_abscisa == final_abscisa
               &&
               origen_ordenada == final_ordenada);
   }

public:
   SegmentoDirigido(double origen_abscisa, double origen_ordenada, double final_abscisa, double final_ordenada){
      SetCoordenadas(origen_abscisa, origen_ordenada, final_abscisa, final_ordenada);
   }

   void SetCoordenadas(double origen_abscisa, double origen_ordenada, double final_abscisa,  double final_ordenada){
      if(SonCorrectos(origen_abscisa, origen_ordenada, final_abscisa, final_ordenada)){
         x_1 = origen_abscisa;
         y_1 = origen_ordenada;
         x_2 = final_abscisa;
         y_2 = final_ordenada;
      }
   }

   double OrigenAbscisa(){
      return x_1;
   }

   double OrigenOrdenada(){
      return y_1;
   }

   double FinalAbscisa(){
      return x_2;
   }

   double FinalOrdenada(){
      return y_2;
   }

   double Longitud(){
      return sqrt((x_2 - x_1)*(x_2 - x_1) + (y_2 - y_1)*(y_2 - y_1));
   }

   void TrasladaHorizontal(double unidades){
      x_1 = x_1 + unidades;
      x_2 = x_2 + unidades;
   }

   void TrasladaVertical(double unidades){
      y_1 = y_1 + unidades;
      y_2 = y_2 + unidades;
   }
};

/*******************************************************************/
// Circunferencia
/*******************************************************************/

class Circunferencia{
private:
   double centro_x = 0.0;
   double centro_y = 0.0;
   double radio = 0.0;

   bool EsCorrectoRadio(double longitud_radio){
      return longitud_radio > 0;
   }

public:
   Circunferencia(double abscisa_centro, double ordenada_centro, double longitud_radio){
      SetCentro(abscisa_centro, ordenada_centro);
      SetRadio(longitud_radio);
   }

   void SetRadio(double longitud_radio){
      if(EsCorrectoRadio(longitud_radio)){
         radio = longitud_radio;
      }
   }

   void SetCentro(double abscisa_centro, double ordenada_centro){
      centro_x = abscisa_centro;
      centro_y = ordenada_centro;
   }

   double AbscisaCentro(){
      return centro_x;
   }

   double OrdenadaCentro(){
      return centro_y;
   }

   double Radio(){
      return radio;
   }

   double Longitud(){
      return 2*PI*radio;
   }

   double Area(){
      return PI*radio*radio;
   }

   void Traslada(double en_horizontal, double en_vertical){
      centro_x = centro_x + en_horizontal;
      centro_y = centro_y + en_vertical;
   }
};

/*******************************************************************/
// Cuadrado
/*******************************************************************/

class Cuadrado{
private:
   double esquina_abscisa;
   double esquina_ordenada;
   double longitud;

   bool EsCorrectaLongitud(double longitud){
      return longitud > 0;
   }

public:
   Cuadrado(double esquina_abscisa_cuadrado, double esquina_ordenada_cuadrado, double longitud_cuadrado){
      SetLongitud(longitud_cuadrado);
      SetEsquinaInfIzq(esquina_abscisa_cuadrado, esquina_ordenada_cuadrado);
   }

   void SetLongitud(double longitud_cuadrado){
      if(EsCorrectaLongitud(longitud_cuadrado)){
         longitud = longitud_cuadrado;
      }
   }

   void SetEsquinaInfIzq(double esquina_abscisa_cuadrado, double esquina_ordenada_cuadrado){
      esquina_abscisa = esquina_abscisa_cuadrado;
      esquina_ordenada = esquina_ordenada_cuadrado;
   }

   double AbscisaEsquina(){
      return esquina_abscisa;
   }

   double OrdenadaEsquina(){
      return esquina_ordenada;
   }

   double Longitud(){
      return longitud;
   }

   double Area(){
      return longitud * longitud;
   }

   double Perimetro(){
      return longitud * 4;
   }

   SegmentoDirigido Lado1(){
      SegmentoDirigido lado(esquina_abscisa, esquina_ordenada, esquina_abscisa + longitud, esquina_ordenada);
      return lado;
   }

   SegmentoDirigido Lado2(){
      SegmentoDirigido lado(esquina_abscisa + longitud, esquina_ordenada, esquina_abscisa + longitud, esquina_ordenada + longitud);
      return lado;
   }

   SegmentoDirigido Lado3(){
      SegmentoDirigido lado(esquina_abscisa + longitud, esquina_ordenada + longitud, esquina_abscisa, esquina_ordenada + longitud);
      return lado;
   }

   SegmentoDirigido Lado4(){
      SegmentoDirigido lado(esquina_abscisa, esquina_ordenada + longitud, esquina_abscisa, esquina_ordenada);
      return lado;
   }

   Punto2D Centro(){
      double mitad_longitud = longitud / 2.0;
      Punto2D centro(esquina_abscisa + mitad_longitud, esquina_ordenada + mitad_longitud);
      return centro;
   }

   Circunferencia CircunferenciaInscrita(){
      Punto2D centro_circunferencia(Centro());
      double long_radio_circunferencia;
      long_radio_circunferencia = longitud / 2.0;

      Circunferencia circunf_inscrita(centro_circunferencia.Abscisa(), centro_circunferencia.Ordenada(), long_radio_circunferencia);
      return circunf_inscrita;
   }

   Circunferencia CircunferenciaCircunscrita(){
      Punto2D centro_circunferencia(Centro());
      double long_radio_circunferencia;

      SegmentoDirigido radio_circunferencia(centro_circunferencia.Abscisa(), centro_circunferencia.Ordenada(), esquina_abscisa, esquina_ordenada);

      long_radio_circunferencia = radio_circunferencia.Longitud();

      Circunferencia circunf_circunscrita(centro_circunferencia.Abscisa(), centro_circunferencia.Ordenada(), long_radio_circunferencia);

      return circunf_circunscrita;
   }

   bool Contiene(Cuadrado otro){
      double x_otro = otro.AbscisaEsquina();
      double y_otro = otro.OrdenadaEsquina();
      double longitud_otro = otro.Longitud();

      return (esquina_abscisa <= x_otro && x_otro + longitud_otro <= esquina_abscisa + longitud && esquina_ordenada <= y_otro && y_otro + longitud_otro <= esquina_ordenada + longitud);
   }
};

/*******************************************************************/
// main
/*******************************************************************/

int main(){
   double esquina_x, esquina_y, long_cuadrado;

   cout << "Introduzca la abscisa de la esquina inferior izquierda del cuadrado ";
   cin >> esquina_x;
   cout << "\nIntroduzca la ordenada de la esquina inferior izquierda del cuadrado  ";
   cin >> esquina_y;
   cout << "\nIntroduzca la longitud del cuadrado ";
   cin >> long_cuadrado;

   // Creamos el objeto cuadrado_A como un cuadrado con los datos anteriores

   Cuadrado cuadrado_A(esquina_x, esquina_y, long_cuadrado);  // Constructor usual con parametros

   // Creamos las circunferencias inscritas y circunscritas a cuadrado_A
   // Las llamamos circunf_interior_cuadrado y circunf_exterior_cuadrado
   // Calculamos e imprimimos sus longitudes,
   // asi como las Areas de los correspondientes circulos
   // Imprimimos el Area de cuadrado_A
   Circunferencia circunf_interior_cuadrado(cuadrado_A.CircunferenciaInscrita());
   Circunferencia circunf_exterior_cuadrado(cuadrado_A.CircunferenciaCircunscrita());

   cout << "\nCuadrado: ";
   cout << "\nArea:     " << cuadrado_A.Area();
   cout << "\n\nCircunferencia interior:";
   cout << "\nLongitud:     " << circunf_interior_cuadrado.Longitud();
   cout << "\nArea circulo: " << circunf_interior_cuadrado.Area();

   cout << "\n\nCircunferencia exterior:";
   cout << "\nLongitud:     " << circunf_exterior_cuadrado.Longitud();
   cout << "\nArea circulo: " << circunf_exterior_cuadrado.Area();

   // Creamos cuadrado_B a partir de los datos introducidos para el primero
   // Imprimimos las coordenas del punto central

   Cuadrado cuadrado_B(esquina_x + 1, esquina_y + 1, long_cuadrado - 2);   // Constructor usual con parametros

   // Obtenemos el punto central de cuadrado_B
   Punto2D centro(cuadrado_B.Centro());

   cout << "\n\nSegundo cuadrado.";
   cout << "\nCoordenadas del punto central: ";
   cout << centro.Abscisa() << " , " << centro.Ordenada();

   // Comprobamos si cuadrado_B contiene a cuadrado_A
   if (cuadrado_B.Contiene(cuadrado_A))
      cout << "\nCuadrado B contiene a cuadrado A";
   else
      cout << "\nCuadrado B no contiene a cuadrado A";

   cout << "\n\n";

   // Entrada:
   // 3 2   7
   // Area: 49
   // Interior: Longitud: 21.9911, Area: 38.4845
   // Exterior: Longitud: 31.1002, Area: 76.969
   // Centro del segundo: 6.5, 5.5
   // B no contiene a A
}
