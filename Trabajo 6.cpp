// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 4 (2)

#include <iostream>
using namespace std;

int main(){
	
	int x;
	int y;
	
	cout << "Inserte un numero: ";
	cin >> x;
	
	cout << "Inserte otro numero: ";
	cin >> y;
	
	x += y; 			// equivale a 	x = x + y
	cout << x << endl;
	
	x -= y; 			// equivale a 	x = x - y
	cout << x << endl;
	
	x *= y;				// equivale a 	x = x * y
	cout << x << endl;
	
	x /= y;				// equivale a 	x = x / y
	cout << x << endl;
	
	x %= y;				// equivale a 	x = x % y
	cout << x << endl;
	
	return 0;
}
