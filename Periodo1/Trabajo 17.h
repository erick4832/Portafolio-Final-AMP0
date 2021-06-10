#ifndef TEMPERATURA_TEMPERATURA_H
#define TEMPERATURA_TEMPERATURA_H

#include <iostream>

// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 8 (1)

using namespace std;

int leerSeleccionUsuario(){
	
	int seleccion;
	
	cout << "* Conversor de temperaturas *" << endl;
	cout << "1 - De Celsius a Fahrenheit" << endl;
	cout << "2 - De Celsius a Kelvin" << endl;
	cout << "3 - De Fahrenheit a Celsius" << endl;
	cout << "4 - De Fahrenheit a Kelvin" << endl;
	cout << "5 - De Kelvin a Celsius" << endl;
	cout << "6 - De Kelvin a Fahrenheit" << endl;
	cout << "Seleccione el tipo de conversion: ";
	
	while (!(cin >> seleccion) || seleccion < 1 || seleccion > 6){
		cout << "Ingrese un valor entre 1 y 6: ";
		cin.clear();				// limpiar la entrada erronea
		cin.ignore(1000, '\n');		// Ignorar hasta mil valores erroneos
		
	}
	
	return seleccion;
	
}

double leerTemperatura(){
	
	double temperatura;
	cout << "Ingrese el valor a convertir: ";
	
	while (!(cin >> temperatura)){
	cout << "Ingrese un valor de temperatura: ";
	cin.clear();
	cin.ignore(1000, '\n');
	}
	
	return temperatura;
	
}

double convertirTemperatura(int tipo, double temperatura){
	
	double temperaturaConvertida;
	
	switch(tipo){
		
		case 1: // C a F
			temperaturaConvertida = 1.8 * temperatura + 32;
			cout << "La temperatura " << temperatura << " C equivale a " << temperaturaConvertida << " F." << endl;
			break;
		
		case 2: // C a K
			temperaturaConvertida = 1.8 * temperatura + 273.15;
			cout << "La temperatura " << temperatura << " C equivale a " << temperaturaConvertida << " K." << endl;
			break;
		
		case 3: // F a C
			temperaturaConvertida = (temperatura - 32) / 1.8 ;
			cout << "La temperatura " << temperatura << " F equivale a " << temperaturaConvertida << " C." << endl;
			break;
		
		case 4: // F a K
			temperaturaConvertida = (5 / 9) * (temperatura - 32) + 273.15;
			cout << "La temperatura " << temperatura << " F equivale a " << temperaturaConvertida << " K." << endl;
			break;
			
		case 5: // K a C
			temperaturaConvertida = temperatura - 273.15;
			cout << "La temperatura " << temperatura << " K equivale a " << temperaturaConvertida << " C." << endl;
			break;
			
		case 6: // K a F
			temperaturaConvertida = (1.8 * (temperatura - 273.15)) + 32;
			cout << "La temperatura " << temperatura << " K equivale a " << temperaturaConvertida << " F." << endl;
			break;
		
		default:
			cout << "Opcion no valida";
			break;
			
	}
	
	return temperaturaConvertida;
	
}

#endif // TEMPERATURA_TEMPERATURA_H
