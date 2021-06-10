// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 6 (1)

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

string obtenerMovimientoComputadora(){
	
	string movComp;
	
	int numMov = rand() % 3 + 1;
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
	}
	
	return movComp ;
	
}

int main (){
	
	
	int x = 2, y = 3;
	
	std::cout << ( x + y ) << endl;
	
	return 0;
}

	string movimientoCompu;
	string movimientoJugador;
	srand(time(0));
	
	
	movimientoJugador = obtenerMovimientoComputadora();
	cout << "Jugador: " << movimientoJugador << endl;
	
	movimientoCompu = obtenerMovimientoComputadora();
	cout << "Computadora: " << movimientoCompu << endl;
	
	return 0;
	
}
