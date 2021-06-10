#ifndef CALCULADORA_CALCULADORA_H
#define CALCULADORA_CALCULADORA_H

// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 6 (2)

#include <iostream>
#include <string>

using namespace std;

const double pi = 3.141592653589793238;

//const int x = 3;

double sumar(double x, double y){
	cout << "Funcion suma... ";
	return x + y;
}

double restar(double x, double y){
	cout << "Funcion resta... ";
	return x - y;
}

double multiplicar(double x, double y){
	cout << "Funcion multiplicacion... ";
	return x * y;
}

double dividir(double x, double y){
	cout << "Funcion division... ";
	return x / y;
}

double solicitarNumero(string queNumero){
	double numero;
	cout << queNumero << ": ";
	
	while(!(cin >> numero)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Valor no valido. Intente de nuevo: ";
	}
	return numero;
}

char solicitarOperador(){
	char operador;
	cout <<" Seleccione la operacion ( + | - | * | / ) ";
	
	while(!(cin >> operador)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Operador no valido. Intente de nuevo: ";
	}
	return operador;
	
}

void calculadora(){
	
	double numero1, numero2, resultado;
	char operador;
	
	cout << "Calculadora de operaciones con dos numeros " << endl;
	cout << "Por favor ingresa dos numeros." << endl;
	
	numero1 = solicitarNumero ("Primer numero");
	numero2 = solicitarNumero ("Segundo numero");
	operador = solicitarOperador();
	
	switch(operador){
		case '+':
			resultado = sumar(numero1,numero2);
			break;
		case '-':
			resultado = restar(numero1,numero2);
			break;
		case '*':
			resultado = multiplicar(numero1,numero2);
			break;
		case '/':
			resultado = dividir(numero1,numero2);
			break;
		default:
			cout <<"Operador no soportado. ";
			resultado = -1.0;
			break;
	}
	
	cout << "El resultado es = " << resultado << endl;

/*	cout << sumar(numero1, numero2) << endl;
	cout << restar(numero1, numero2) << endl;
	cout << multiplicar(numero1, numero2) << endl;
	cout << dividir(numero1, numero2) << endl;
*/
	
}

double valorPi(){
	return pi;
}


#endif //CALCULADORA_CALCULADORA_H
