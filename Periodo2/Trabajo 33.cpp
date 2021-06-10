// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 3 / 3 / 2021 (1)

#include <iostream>
#include <string>
#include <array>

using namespace std;

int main(){
	string nombres[5] = {"Jose", "Erick", "Krista", "Manuel", "Diego"};
	
	array<string,5> nombres2 = {"Briam", "Gustavo", "Graham", "Emmanuel", "Alejandra"};
	
	//Imprimir los nombres
	
	int tamanio = sizeof(nombres)/sizeof(nombres[0]);
	
	int tamanio2 = nombres2.size();
	
	for (int i = 0; i < tamanio; i++){
		cout << nombres[i] << endl;
	}
	
	for (int i = 0; i < tamanio2; i++){
		cout << nombres[i] << endl;
	}
	
	return 0;
}
