// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 4 (1)

#include <iostream>
using namespace std;

int main(){
	
//	int x;
//	int y;

	double x;
	double y;
	
	cout << " *** Calcula operaciones aritmeticas de dos numeros *** \n";
	
	cout << "Inserte un numero: ";
	cin >> x;
	
	cout << "Inserte otro numero: ";
	cin >> y;
	
	cout << "Suma: " << x + y << endl; // suma de x + y
	cout << "Resta: " << x - y << endl; // resta de x - y
	cout << "Multiplicacion: " << x * y << endl; // multiplicacion de x * y
	
	
	cout << "Division: " << x / y << endl; // Division de x / y
	
	int div = x / y;
	cout << "Division int: " << div << endl;
	
	int z = x;
	int w = y;
	cout << "Residuo de la division: " << z % w << endl; // Residuo de dividir (z)x / (w)y
	
	++x;
	++y;
	cout << "Incremento en uno: " << "x: " << x << " y: " << y << endl;
	
	--x;
	--y;
	cout << "Decremento en uno: " << "x: " << x << " y: " << y << endl;
	
	return 0;
}
