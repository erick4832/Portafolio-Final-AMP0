// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 24 / 2 / 2021 (1)

#include <iostream>

using namespace std;

int main(){
	
	// Arreglo de tipo integer de 3 filas y 2 columnas
	int test [3][2] = {{2,-5},
					   {4,0},
					   {9,1}};
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 2; j++){
			cout << "test [" << i << "][" << j << "] = " << test[i][j] << endl;
		}
	}

	return 0;
}
