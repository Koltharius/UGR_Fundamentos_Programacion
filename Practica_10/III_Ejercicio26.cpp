#include <iostream>
using namespace std;

class TraccionBicicleta{
private:
	int estrella, pinion;

   void Cambia_a(int estrella_objetivo, int pinion_objetivo){
	   bool cambio_correcto;

		cambio_correcto = (
			((estrella_objetivo == 1) && ( (pinion_objetivo <= 4) && (pinion_objetivo >= 1) ))
			||
			((estrella_objetivo == 2) && ( (pinion_objetivo >= 2) && (pinion_objetivo <= 6) ))
			||
			((estrella_objetivo == 3) && ( (pinion_objetivo >= 5) && (pinion_objetivo <= 7) ))
		);

      if(cambio_correcto){
         pinion = pinion_objetivo;
         estrella = estrella_objetivo;
      }
	}

public:
	TraccionBicicleta(){
		estrella = 1;
      pinion  = 1;
	}

	int GetEstrella(){
		return estrella;
	}

	int GetPinion(){
		return pinion;
	}

	void BajaEstrella(){
		Cambia_a(estrella - 1, pinion);
	}

	void SubeEstrella(){
		Cambia_a(estrella + 1, pinion);
	}

	void SubePinion(){
		Cambia_a(estrella, pinion + 1);
	}

	void SubePinionDoble(){
		Cambia_a(estrella, pinion + 2);
	}

	void BajaPinion(){
		Cambia_a(estrella, pinion - 1);
	}

	void BajaPinionDoble(){
		Cambia_a(estrella, pinion - 2);
	}
};

int main(){
   const char TERMINADOR = '#';
   const char ESTRELLA = 'E';
   const char PINION = 'P';
   const char SUBE = 'S';
   const char BAJA = 'B';
   const char SUBE_DOBLE = 'T';
   const char BAJA_DOBLE = 'C';

   TraccionBicicleta mi_traccion;
   char plato, movimiento;

   cin >> plato;

   while(plato != TERMINADOR){
      cin >> movimiento;

      if(plato == ESTRELLA){
         if (movimiento == SUBE){
            mi_traccion.SubeEstrella();
         }
         else if(movimiento == BAJA)
            mi_traccion.BajaEstrella();
      }
      else if(plato == PINION){
         if(movimiento == SUBE){
            mi_traccion.SubePinion();
         }
         else if(movimiento == BAJA){
            mi_traccion.BajaPinion();
         }
         else if(movimiento == SUBE_DOBLE){
            mi_traccion.SubePinionDoble();
         }
         else if (movimiento == BAJA_DOBLE){
            mi_traccion.BajaPinionDoble();
         }
      }

      cin >> plato;
   }

	cout << "\n\nEstado actual:\n";
	cout << "\tEstrella: " << mi_traccion.GetEstrella() << "\n";
	cout << "\tPinion: " << mi_traccion.GetPinion();

	cout << "\n\n";

}
