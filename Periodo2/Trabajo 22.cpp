// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 22 / 2 / 2021 (2)

#include <iostream>

using namespace std;

int main(int argc, char** argv){
	
	cout << "Tengo " << argc << " argumentos: " << endl;
	for (int i = 0; i < argc; i++){
		cout << argv[i] << endl;
	}
	
	return 0;
}
