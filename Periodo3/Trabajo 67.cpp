// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 28 / 4 / 2021 (2)

#include "trabajo 66.h"
#include <iostream>

int main ( int argc, const char * argv[]){
	
	Lista<int> miLista;
	
	miLista.adjuntar(41);
	miLista.adjuntar(52);
	miLista.adjuntar(63);
	miLista.insertar(2, 74);
	miLista.adjuntar(99);
	miLista.insertar(0, 30);
	
	miLista.comoCadena();
}
