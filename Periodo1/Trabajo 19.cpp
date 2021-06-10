// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 8 (3)

#include <iostream>
#include <cmath>
#include <cctype>
#include <string>

/*
Este programa recibe una "lista" de numeros y nos devuelve el
valor maximo encontrado entre dichos numeros
*/

using namespace std;

void calcularMaxSqurt(){
	int numero;
	int maximo;
	double raizCuadrada;
	
	for (int i = 0; i < 10; i++){
		
		cout << "Ingrese el numero " << (i+1) << ": ";
		cin >> numero;
		cin.clear();
		cin.ignore(10, '\n'); 
		if (i == 0)
			maximo = numero;
		if(numero > maximo)
			maximo = numero;
	}
	
	raizCuadrada = sqrt(maximo);	
	cout << " El Valor maximo es: " << maximo << endl;
	cout << "Su raiz cuadrada es: " << raizCuadrada << endl;

}

void obtenerDigitos(){
	
	cout << "Ingrese una cadena de texto o digitos sin espacios ";
	string cadena;
	char caracter;
	cin >> cadena;
	
	int i = 0;
	while (i < cadena.length()){
		caracter = cadena.at(i);
		if (isdigit(caracter))
			cout << caracter << endl;
		i++;
	}
	
}


int main(){
	
	 calcularmaxSqurt();
	//obtenerDigitos();
	return 0;	
	
	}
