#include <iostream>
using namespace std;

class DepositoSimulacion{
private:
   double capital = 0.0;
   double interes = 0.0;

   bool EsCorrectoCapital(double un_capital){
      return (un_capital >= 0);
   }

   bool EsCorrectoInteres(double un_interes){
      return (0 < un_interes  &&  un_interes < 100);
   }
public:
   DepositoSimulacion(double capital_deposito, double interes_deposito){
      SetCapital(capital_deposito);
      SetInteres(interes_deposito);
   }

   double Capital(){
      return capital;
   }

   double Interes(){
      return interes;
   }

   void SetCapital(double nuevo_capital){
      if (EsCorrectoCapital(nuevo_capital))
         capital = nuevo_capital;
   }

   void SetInteres(double nuevo_interes){
      if (EsCorrectoInteres(nuevo_interes))
         interes = nuevo_interes;
   }

   double TotalObtenidoDespues_de(int anios_totales){
      double total;
      int anio;

      total = capital;

      for(anio = 1; anio <= anios_totales; anio++)
         total = total + total*interes/100.0;

      return total;
   }

   int NumeroAniosHasta(double cantidad_objetivo){
      double total;
      int anios;

      total = capital;
      anios = 0;

      while (total < cantidad_objetivo){
         anios += 1;
         total += ((total*interes)/100.0);
      }
      return anios;
   }
};

int main(){

   double capital_deposito, interes_deposito, capital_a_obtener;
   int anios;

   cout << "Introduzca capital inicial:";
   cin >> capital_deposito;
   cout << "\nIntroduzca interes (como un %):";
   cin >> interes_deposito;

   DepositoSimulacion deposito(capital_deposito, interes_deposito);

   cout << "\nNumero de anios:";
   cin >> anios;

   cout << "\n\nCuando pasen" << anios << " anios, el capital sera de" <<
            deposito.TotalObtenidoDespues_de(anios) << " euros\n";

   cout << "\nPara obtener el doble del capital inicial han de pasar "
        << deposito.NumeroAniosHastaObtener (2 * deposito.Capital()) << " anios\n";

   cout << "\nQue cantidad desea obtener: ";
   cin >> capital_a_obtener;

   cout << "\n\nPara obtener " << capital_a_obtener << " euros, han de pasar " <<
           deposito.NumeroAniosHastaObtener(capital_a_obtener) << " anios\n";

   cout << "\n\n";
}
