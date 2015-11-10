#include <iostream>
using namespace std;

bool LeeOpcion2Alternativas(char caracter){

}

int main(){
   char respuesta;
   bool pensionista, autonomo;
   const string MENSAJE = "Es pensionista (S/N): ";

   cout << MENSAJE;
   cin >> respuesta;

   while(toupper(respuesta) != 'S' && toupper(respuesta) != 'N'){
      cout << MENSAJE;
      cin >> respuesta;
   }
}
