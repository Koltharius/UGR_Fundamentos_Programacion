#include <iostream>

using namespace std;

int main(){
  double capital;
  double interes;
  double total;

  cout << "Introduzca el capital: ";
  cin >> capital;
  cout << "Introduzca el interes: ";
  cin >> interes;

  total = capital + (capital * (interes / 100));

  cout << "\nEl total obtenido es " << total << "\n\n";
}
