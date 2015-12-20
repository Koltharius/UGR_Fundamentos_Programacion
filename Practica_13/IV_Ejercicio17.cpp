#include <iostream>
#include <string>
using namespace std;

class Login{
private:
   int num_caracteres_a_coger;
public:
   Login(int numero_caracteres_a_coger)
      :num_caracteres_a_coger(numero_caracteres_a_coger)
   {
   }

   string Codifica(string nombre_completo){
      int final = nombre_completo.size();
      int aniadidos = 0;
      string login;

      for(int i=0; i<final; i++){
         if(nombre_completo[i] == ' '){
            aniadidos = 0;
         }

         else if(aniadidos < num_caracteres_a_coger){
            login.push_back(tolower(nombre_completo[i]));
            aniadidos++;
         }
      }

      return login;
   }
};

int main(){
   Login login_automatico(2);
   string codifica;
   const string TERMINADOR = "#";

   codifica = cin.get();
   while(codifica != TERMINADOR){
      codifica = cin.get();
   }

   codifica = login_automatico.Codifica("David Sanchez Jimenez");
   cout << codifica << "\n";
}
