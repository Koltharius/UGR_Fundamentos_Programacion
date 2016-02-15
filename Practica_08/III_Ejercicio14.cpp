#include <iostream>
#include <cctype>
using namespace std;

enum class Opciones {introducir, suma, producto, maximo, salir};

Opciones LeeOpcion (){
   Opciones opcion;
   char opcion_caracter;
   const string TEXTO_OPCIONES =
      "\n----------------------
       \nI. Introducir numeros
       \nS. Suma
       \nP. Producto
       \nM. Maximo
       \nR. SaliR
       \n----------------------
       \n\nIntroduzca la opcion: ";
   const string TEXTO_OPCION_INCORRECTA = "\nLa opcion escogida es incorrecta\n";
   bool opcion_correcta;

   cout << TEXTO_OPCIONES;

   do{
      opcion_correcta = true;
      cin >> opcion_caracter;
      opcion_caracter = toupper(opcion_caracter);

      if (opcion_caracter == 'I'){
         opcion = Opciones::introducir;
      }
      else if (opcion_caracter == 'S'){
         opcion = Opciones::suma;
      }
      else if (opcion_caracter == 'P'){
         opcion = Opciones::producto;
      }
      else if (opcion_caracter == 'M'){
         opcion = Opciones::maximo;
      }
      else if (opcion_caracter == 'R'){
         opcion = Opciones::salir;
      }
      else{
         cout << TEXTO_OPCION_INCORRECTA;
         opcion_correcta = false;
      }
   }while (!opcion_correcta);

   return opcion;
}

double Max(double un_valor, double otro_valor){
	double max;

	if (un_valor >= otro_valor){
		max = un_valor;
   }
	else{
		max = otro_valor;
   }

	return max;
}

int main(){
   const string TEXTO_INTRO_VALORES = "\nIntroduzca dos valores enteros\n";
   const string TEXTO_RESULTADO = "\nResultado: ";
   const string TEXTO_DATOS_NO_INTRODUCIDOS = "\nDebe introducir datos\n";
   double dato1, dato2, resultado;

   Opciones opcion;
   bool datos_introducidos;

   datos_introducidos = false;

   do{
      opcion = LeeOpcion();
      if(opcion != Opciones::salir){
         if(opcion == Opciones::introducir){
            cout << TEXTO_INTRO_VALORES;
            cin >> dato1;
            cin >> dato2;
            datos_introducidos = true;
         }
         else{
            if(datos_introducidos){
               if(opcion == Opciones::suma){
                  resultado = dato1 + dato2;
               }
               else if(opcion == Opciones::producto){
                  resultado = dato1 * dato2;
               }
               else if (opcion == Opciones::maximo){
                  resultado = Max(dato1, dato2);
               }

               cout << TEXTO_RESULTADO << resultado << "\n\n";
            }
            else{
               cout << TEXTO_DATOS_NO_INTRODUCIDOS;
            }
         }
      }
   } while(opcion != Opciones::salir);
   cout << "\n\n";
}
