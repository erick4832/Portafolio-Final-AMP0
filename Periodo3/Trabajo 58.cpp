// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 19 / 4 / 2021 (2)

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[]){
	vector<int> v;
	
	//.push_back sirve para colocar elementos al final del vector
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);

	cout << "tamanio " << v.size() << endl;
	cout << "Primer valor en el vector " << v.front() << endl;
	cout << "Ultimo valor en el vector " << v.back() << endl << endl;

	for(int i=0; i < v.size(); i++){
		cout << v[i] << endl;
	}

	return 0;
}
