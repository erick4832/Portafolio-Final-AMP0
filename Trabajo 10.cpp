// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 5 (2)

#include <iostream>

using namespace std;

int main(){
	
	int i = 10, j = 11;
	bool b1 = true, b2 = false;
	
	if (i < j) { cout << "i < j \n";}
	if (i <= j) { cout << "i <= j \n";}
	if (i != j) { cout << "i != j \n";}
	if (i == j) { cout << "i == j \n";}
	if (i >= j) { cout << "i >= j \n";}
	if (i > j) { cout << "i > j \n";}
	
	if (b1 && b2){ cout << " b1 AND b2 \n";}
	if (!(b1 && b2)) { cout << " NOT (b1 AND b2) \n";}
	if (b1 || b2) { cout << " b1 OR b2 \n";}
	
	return 0;
}
