#include <iostream>
using namespace std;

class Ventas{
   private:
      int id_suc_1, id_suc_2, id_suc_3;
      int num_ventas_1, num_ventas_2, num_ventas_3;

   public:
      Ventas(int id_suc_1, int id_suc_2, int id_suc_3){
         id_suc_1 = id_suc_1;
         id_suc_2 = id_suc_2;
         id_suc_3 = id_suc_3;

         num_ventas_1 = 0;
         num_ventas_2 = 0;
         num_ventas_3 = 0;
      }

      void ActualizarVentas(int id_sucursal, int unidades_vendidas){
         if(unidades_vendidas > 0){
            if(id_sucursal ==  id_suc_1){
               num_ventas_1 += unidades_vendidas;
            }
            else if(id_sucursal ==  id_suc_2){
               num_ventas_2 += unidades_vendidas;
            }
            else if(id_sucursal ==  id_suc_3){
               num_ventas_3 += unidades_vendidas;
            }
         }
      }

      int IDSucursalGanadora(){
         int num_max_ventas = num_ventas_1;
         int id_suc_max_ventas = id_suc_1;

         if (num_ventas_2 > num_max_ventas){
            num_max_ventas = num_ventas_2;
            id_suc_max_ventas = id_suc_2;
         }

         if (num_ventas_3 > num_max_ventas){
            num_max_ventas = num_ventas_3;
            id_suc_max_ventas = id_suc_3;
         }

         return id_suc_max_ventas;
      }

      int NumVentas(int id_sucursal){
         if (id_sucursal == id_suc_1){
            return num_ventas_1;
         }
         else if (id_sucursal == id_suc_2){
            return num_ventas_2;
         }
         else if (id_sucursal == id_suc_3){
            return num_ventas_3;
         }
         else{
            return -1;
         }
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
