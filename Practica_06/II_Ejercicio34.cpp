#include <iostream>

using namespace std;

int main() {
   int n, m;
   int factorial_n;
   int factorial_m;
   int factorial_n_menos_m;
   int valor_n_menos_m;
   int combinatorio;

   cout << "Introduce el valor de n: ";
   cin >> n;
   cout << "Introduce el valor de m: ";
   cin >> m;

   factorial_n = 1;
   factorial_m = 1;
   factorial_n_menos_m = 1;
   valor_n_menos_m = n - m;

   for(int i=2; i<=n; i++) {
      factorial_n *= i;
   }

   for(int i=2; i<=m; i++) {
      factorial_m *= i;
   }

   for(int i=2; i<=valor_n_menos_m; i++) {
      factorial_n_menos_m *= i;
   }

   combinatorio = (factorial_n / (factorial_m * factorial_n_menos_m));

   cout << "\nEl valor " << n << "! / (" << m << "! * (" << n << " - " << m << ")!) = " << combinatorio << "\n\n";
}
