// Author: Erick Eduardo Martinez Ramos
// Tarea: Piedra, papel o tijera, spock - lagarto

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
int main (){
	int movJug;
	cout <<" Programa por Erick Eduardo Martinez \n";
	cout <<" Juguemos a piedra, papel, tijera, lagarto, Spock \n";
	cout <<" 1. Piedra \n 2. Papel \n 3. Tijera \n 4. Lagarto \n 5. Spock \n: ";
	cin >> movJug;
	srand(time(0));
	string movComp;
	int numMov = rand() % 5 + 1;
	switch(numMov) {
		case 1:
			movComp = "Piedra";
			break;
		case 2:
			movComp = "Papel";
			break;
		case 3:
			movComp = "Tijera";
			break;
		case 4:
			movComp = "Lagarto";
			break;
		case 5:
			movComp = "Spock";
			break;
	}
	cout << " La computadora escogio: " << movComp <<endl;
	if (movJug == numMov){
		cout << " Empate \n";
		// empate
	} else if ((movJug == 1) && (numMov == 3)){
		cout << " Ganaste \n";
		// Piedra vence tijeras
	}else if ((movJug == 1) && (numMov == 4)){
		cout << " Ganaste \n";
		// Piedra vence lagarto
	} else if ((movJug == 2) && (numMov == 1)){
		cout << " Ganaste \n";
		// Papel vence piedra
	} else if ((movJug == 2) && (numMov == 5)){
		cout << " Ganaste \n";
		// Papel vence a Spock
	} else if ((movJug == 3) && (numMov == 2)){
		cout << " Ganaste \n";
		// Tijera vence papel
	} else if ((movJug == 3) && (numMov == 4)){
		cout << " Ganaste \n";
		// Tijera vence lagarto
	} else if ((movJug == 4) && (numMov == 2)){
		cout << " Ganaste \n";
		// Lagarto vence papel
	} else if ((movJug == 4) && (numMov == 5)){
		cout << " Ganaste \n";
		// Lagarto vence a Spock
	} else if ((movJug == 5) && (numMov == 1)){
		cout << " Ganaste \n";
		// Spock vence piedra
	} else if ((movJug == 5) && (numMov == 3)){
		cout << " Ganaste \n";
		// Spock vence tijeras
	}  else {
		cout << "Perdiste \n";
		// Cuando la computadora gana
	}
	return 0;
}
