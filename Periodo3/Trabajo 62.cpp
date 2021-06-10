// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 21 / 4 / 2021 (2)

#include <iostream>
#include "Trabajo 61.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	ListaEnteros miLista;
	cout << miLista.comoCadena() << endl;
	cout << (miLista.estaVacia() ? "True" : "false") << endl;
	miLista.adjuntar(41);
	miLista.adjuntar(52);
	miLista.adjuntar(63);
	cout << miLista.comoCadena() << endl;
	
	miLista.insertar(2,74);
	cout << miLista.comoCadena() << endl;
	
	miLista.insertar(0,30);
	cout << miLista.comoCadena() << endl;
	
	cout << (miLista.estaVacia() ? "true" : "false") << endl;
	cout << "Tamanio de la lista: " << miLista.tamanio() << endl;
	
	cout << miLista.obtener(4) << endl;
	
	cout << miLista.remover(3) << endl;
	cout << miLista.comoCadena() << endl;
	
	miLista.adjuntar(85);
	cout << miLista.comoCadena() << endl;
	
	return 0;
}
