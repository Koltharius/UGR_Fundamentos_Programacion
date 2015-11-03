#include <iostream>

using namespace std;

int main(){
   int anterior, numero, repeticiones;

   cin >> numero;
   repeticiones = 1;

   while (numero != -1) {
      anterior = numero;
      cin >> numero;

      if(anterior == numero){
         repeticiones++;
      }

      else{
         cout << repeticiones << " " << anterior << "\n";
         repeticiones = 1;
      }
   }
}
