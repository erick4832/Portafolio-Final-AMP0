// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 10 / 3 / 2021 (2)

#include <iostream>

using namespace std;

int busquedaBinaria(int arr[], int tamanio, int valor){
	int inf = 0;
	int sup = tamanio - 1;
	int med;
	int indice = -1;
	while (inf <= sup) {
		//Valor esta en numeros[inf..sup] o no existe
		med = inf + (sup - inf) / 2;
		if (valor < arr[med]) sup = med - 1;
		else if (valor < arr[med]) inf = med + 1;
		else {
			indice = med;
			break;
		}
	}
	return indice;
}

int contarSumaTres(int arr[], int tamanio){
	int contar = 0;
	for (int i = 0; i < tamanio; i++){
		for (int j = i + 1; j < tamanio; j++){
			if (busquedaBinaria(arr,tamanio,-(arr[i]+arr[j]))>j){
				//Si un valor igual a la suma de arr[i]+arr[j] se encuentra en un indice superior a j.
				//cout << arr[i] << arr[j] << endl;
				contar++;
			}
		}
	}
	return contar;
}

int main(){
	// Los arreglos deben estar ordenados
	int arr[] = {1,3,4};
	int arr2[] = {-3,-2,5};
	int size = sizeof(arr)/sizeof(arr[0]);
	int size2 = sizeof(arr2)/sizeof(arr2[0]);
	cout << contarSumaTres(arr,size) << endl;
	cout << contarSumaTres(arr2,size) << endl;
	return 0;
}
