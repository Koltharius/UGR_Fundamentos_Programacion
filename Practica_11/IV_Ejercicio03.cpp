#include <iostream>
#include <string>
using namespace std;

class VentasSucursales{
private:
   static const int NSUCURSALES = 100;
   static const int VACIO = -1;
   int n_ventas[NSUCURSALES];

public:
   VentasSucursales(){
      for (int i=0; i<NSUCURSALES; i++){
         n_ventas[i] = VACIO;
      }
   }

   void Actualiza(int identif_sucursal, int unidades_vendidas){
      if (unidades_vendidas > 0){
         if (1 <= identif_sucursal && identif_sucursal <= 100)
            n_ventas[identif_sucursal] = n_ventas[identif_sucursal] + unidades_vendidas;
      }
   }

   int IDSucursalGanadora(){
      int sucursal_mas_ventas;
      int primera_no_vacia;

      primera_no_vacia = 0;

      while (n_ventas[primera_no_vacia] != VACIO && primera_no_vacia < NSUCURSALES){
         primera_no_vacia++;
      }

      sucursal_mas_ventas = primera_no_vacia;

      for (int i=primera_no_vacia + 1; i < NSUCURSALES; i++){
         if (n_ventas[i] != VACIO && n_ventas[i] > n_ventas[sucursal_mas_ventas]){
            sucursal_mas_ventas = i;
         }
      }

      return sucursal_mas_ventas;
   }

   int NumeroVentas(int id_sucursal){
      if (1 <= id_sucursal && id_sucursal <= NSUCURSALES)
         return n_ventas[id_sucursal];
      else
         return VACIO;
   }
};

int main(){
   const int TERMINADOR = -1;
   int identif_sucursal,  ID_sucursal_ganadora, unidades_vendidas;
   char cod_producto;
   int  ventas_sucursal_ganadora;
   string mensaje_entrada;
   bool fichero_vacio;

   VentasSucursales ventas;

   ID_sucursal_ganadora = TERMINADOR;
   cin >> identif_sucursal;
   fichero_vacio = identif_sucursal  == TERMINADOR;

   if (!fichero_vacio){
      while (identif_sucursal != TERMINADOR){
         cin >> cod_producto;
         cin >> unidades_vendidas;
         ventas.Actualiza(identif_sucursal, unidades_vendidas);
         cin >> identif_sucursal;
      }

      ID_sucursal_ganadora = ventas.IDSucursalGanadora();
      ventas_sucursal_ganadora = ventas.NumeroVentas(ID_sucursal_ganadora);
   }

   if (fichero_vacio)
      cout << "\nEl fichero estaba vacio";
   else{
      cout << "\nSucursal ganadora: " << ID_sucursal_ganadora;
      cout << "\nVentas realizadas: " << ventas_sucursal_ganadora;
   }

   cout << "\n\n";
}
