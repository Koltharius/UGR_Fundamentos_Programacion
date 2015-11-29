#include <iostream>
using namespace std;

class Ventas{
   private:
      int id_suc_1, id_suc_2, id_suc_3;
      int num_ventas_1, num_ventas_2, num_ventas_3;

   public:
      Ventas(int id_suc_1, int id_suc_2, int id_suc_3){

      }

      void ActualizarVentas(int id_sucursal, int unidades_vendidas){

      }

      int IDSucursalGanadora(){

      }

      int NumVentas(int id_sucursal){

      }
};

int main() {
   const int TERMINADOR = -1;
   int id_suc_1 = 1;
   int id_suc_2 = 2;
   int id_suc_3 = 3;
   char codigo_producto;
   int  unidades_vendidas;
   int id_sucursal_ganadora;
   int total_ventas;
   int id_sucursal;

   Ventas ventas_empresa(id_suc_1, id_suc_2, id_suc_3);

   cin >> id_sucursal;

   while (id_sucursal != TERMINADOR){
      cin >> codigo_producto;
      cin >> unidades_vendidas;
      ventas_empresa.ActualizarVentas(id_sucursal, unidades_vendidas);
      cin >> id_sucursal;
   }

   id_sucursal_ganadora = ventas_empresa.IDSucursalGanadora();
   total_ventas = ventas_empresa.NumVentas(id_sucursal_ganadora);

   cout << "\nLa sucursal ganadora es " << id_sucursal_ganadora;
   cout << "\nEl numero de ventas es " << total_ventas;
   cout << endl << endl;
}
