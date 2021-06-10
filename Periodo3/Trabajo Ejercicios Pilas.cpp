// Autor Erick Eduardo Martinez Ramos
//Ejercicios pilas y colas (1)


#include <iostream>
#include <string>
#include "Trabajo Pilas.h"

using std::string;
using std::cin;
using std::cout;
using std::endl;

bool estanLlavesBalanceadas(string expresion){
	Pila<char> unaPila;
	for(size_t i = 0; i < expresion.length(); i++){
		char caracter = expresion[i];
//		cout << caracter << endl; // esto se puede borrar después
		if(caracter == '<html>'){
		unaPila.push(caracter);
		cout << unaPila.pilaComoCadena() << endl;
		} else if( caracter == '</html>'){
		if(unaPila.estaPilaVacia()){
		return false;
		}
		unaPila.pop();
		cout << unaPila.pilaComoCadena() << endl;
		}
	}
	return unaPila.estaPilaVacia();
}

int main(){
	string cadena;
	cout << "Ingrese el codigo HTML: " << endl;
	cin >> cadena;
	if (estanLlavesBalanceadas(cadena)) {
	cout << "El codigo HTML es valido.";
	} else {
	cout << "El codigo HTML no es valido.";
	}
	return 0;
}
