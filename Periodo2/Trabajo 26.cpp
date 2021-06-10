// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 24 / 2 / 2021 (2)

#include <iostream>

using namespace std;

int main(){
	
	// Arreglo de tipo integer de 3 filas y 2 columnas
	int numeros[2][3];
	
	cout << "Ingrese 6 numeros:" << endl;
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cin >> numeros[i][j];
		}
	}
	
	cout << "Los numeros ingresados son: " << endl;
	
	for (int i = 0; i < 2; i++){
		for (int j = 0; j < 3; j++){
			cout << "numeros[" << i << "][" << j << "] = " << numeros[i][j] << endl;
		}
	}

	return 0;
}
