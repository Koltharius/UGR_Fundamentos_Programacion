#include <iostream>

using namespace std;

int main(){
  const double PI = 3.14159;
  double radio;
  double area;
  double longitud;

  cout << "Introuduce el radio: ";
  cin >> radio;

  area = PI * (radio * radio);
  longitud = 2 * PI * radio;

  cout << "\nPara un radio de valor " << radio << " el valor de su area es " << area << " y el valor de la longitud es de " << longitud << "\n\n";
}
