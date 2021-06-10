// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 4 (3)

#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Inserte un numero: ";
	cin >> x;
	
	cout << "Inserte otro numero: ";
	cin >> y;
	
	bool var1 = true;
	bool var2 = false;
	
	cout << var1 << endl;
	cout << var2 << endl;
	
	// 0 = Falso y 1 = Verdadero
	
	cout << ( x < y ) << endl;		// Menor que
	cout << ( x > y ) << endl;		// Mayor que
	cout << ( x <= y ) << endl;		// Menor o igual que
	cout << ( x >= y ) << endl;		// Mayor o igual que
	cout << ( x != y ) << endl;		// Diferente que
	cout << ( x == y)  << endl;		// Igual que
	
	return 0;
}
