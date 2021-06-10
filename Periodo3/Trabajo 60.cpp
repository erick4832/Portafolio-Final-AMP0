// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 19 / 4 / 2021 (4)

#include "Trabajo 59.h"
#include <iostream>

using namespace std;

int main(){
	
	ListaEnteros lint1(10);
	
	lint1.adjuntar(12);
	lint1.adjuntar(7);
	lint1.adjuntar(19);
	lint1.imprimirLista();
	
	lint1.adjuntar(30);
	lint1.imprimirLista();
	
	lint1.insertar(1,41);
	lint1.imprimirLista();
	
	lint1.remover(2);
	lint1.imprimirLista();
	
	return 0;
}
