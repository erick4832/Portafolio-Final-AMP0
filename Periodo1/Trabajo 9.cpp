// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 5 (1)

#include <iostream>
#include <cstdlib>		// Generar numeros aleatorios
#include <ctime>		// Hora

int main (){
	
	using namespace std;
	
	int magico;
	int intento;
	char respuesta = 'n';
	
//	Funcion que inicializa la generacion de numero aleatorios
	srand(time(0));
	
//	Numero aleatorio extraido del generador en un rango desde 10 a 1
	magico = rand() % 10 + 1;
	
//	cout << magico << endl;
	
	cout << "Adivina el numero magico: ";
	cin >> intento;
	
//	Condicion para evaluar el numero ingresado
	if (magico == intento) {
		cout << "Correcto! como lo supiste?";
	} 
	
	else if (magico > intento){
		cout << "Incorrecto. El numero es mayor que " << intento << endl;
	}
	else {
		cout << "Incorrecto. El numero es menor que " << intento << endl;
	}

	cout << "Quieres saber cual era el numero? (y/n): ";
	cin >> respuesta;
	if (respuesta == 'y'){
		cout << "El numero secreto era: " << magico << endl;
	}
	else {
		cout << "Bueno, esta bien, intentalo de nuevo" << endl;
	}
/*	
	else {
		cout << "Respuesta incorrecta, sigue intentando!" << endl;
		cout << "El numero era " << magico << endl;
	}
*/
	
	return 0;
	
}
