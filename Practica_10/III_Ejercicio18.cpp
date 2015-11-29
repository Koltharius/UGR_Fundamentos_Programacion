#include <iostream>
using namespace std;

class AlumnoFP{
   private:
      string nombre;
      string primer_apellido;
      string dni;
      int teoria = 0;
      int parcial_pract1 = 0;
      int parcial_pract2 = 0;
      int participacion_clase = 0;

   public:
      ///////////////////////////////////////////////////////////////
      // Constructor
      ///////////////////////////////////////////////////////////////

      AlumnoFP(string nombre, string primer_apellido, string dni, int teoria, int parcial_pract1, int parcial_pract2, int participacion_clase){
         set_nombre(nombre);
         set_apellido(primer_apellido);
         set_dni(dni);
         set_teoria(teoria);
         set_parcial_pract1(parcial_pract1);
         set_parcial_pract2(parcial_pract2);
         set_participacion_clase(participacion_clase);
      }

      ///////////////////////////////////////////////////////////////
      // Consultores
      ///////////////////////////////////////////////////////////////

      void set_nombre(string nombre){
         nombre = nombre;
      }

      string get_nombre(){
         return nombre;
      }

      void set_apellido(string primer_apellido){
         primer_apellido = primer_apellido;
      }

      string get_apellido(){
         return primer_apellido;
      }

      void set_dni(string dni){
         dni = dni;
      }

      string get_dni(){
         return dni;
      }

      void set_teoria(int teoria){
         teoria = teoria;
      }

      int get_teoria(){
         return teoria;
      }

      void set_parcial_pract1(int parcial_pract1){
         parcial_pract1 = parcial_pract1;
      }

      int get_parcial_pract1(){
         return parcial_pract1;
      }

      void set_parcial_pract2(int parcial_pract2){
         parcial_pract2 = parcial_pract2;
      }

      int get_parcial_pract2(){
         return parcial_pract2;
      }

      void set_participacion_clase(int participacion_clase){
         participacion_clase = participacion_clase;
      }

      int get_participacion_clase(){
         return participacion_clase;
      }

      double nota_final(double teoria, double parcial_pract1, double parcial_pract2, double participacion_clase){
         double nota_final;
         double porc_teoria = 0.7;
         double porc_prac1 = 0.05;
         double porc_prac2 = 0.15;
         double porc_participacion = 0.1;

         nota_final = (teoria * porc_teoria) +
                      (parcial_pract1 * porc_prac1) +
                      (parcial_pract2 * porc_prac2) +
                      (participacion_clase * porc_participacion);

         return  nota_final;
      }
};

int main(){
   string nombre;
   string apellido;
   string dni;
   int teoria;
   int parcial_pract1;
   int parcial_pract2;
   int participacion_clase;
   int nota;

   cout << "Introduce el nombre: ";
   cin >> nombre;
   cout << "Introduce el primer apellido: ";
   cin >> apellido;
   cout << "Introduce el DNI: ";
   cin >> dni;
   cout << "Introduce la nota de teoria: ";
   cin >> teoria;
   cout << "Introduce la nota del primer parcial: ";
   cin >> parcial_pract1;
   cout << "Introduce la nota del segundo parcial: ";
   cin >> parcial_pract2;
   cout << "Introduce la nota de la participacion en clase: ";
   cin >> participacion_clase;

   AlumnoFP AlumnoFP(nombre, apellido, dni, teoria, parcial_pract1, parcial_pract2, participacion_clase);


   nota = AlumnoFP.nota_final(teoria, parcial_pract1, parcial_pract2, participacion_clase);

   cout << "\nLa nota del alumno es " << nota << "\n\n";
}
