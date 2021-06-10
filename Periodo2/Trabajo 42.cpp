// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 17 / 3 / 2021 (1)

#include <iostream>

using namespace std;

int main(){
	
	int paul = 21;
	int* melissa = &paul;
	int dave = *melissa;
	int *tom = &dave;
	int **ramon = &tom;
	
	cout << "paul		: " << paul << endl;
	cout << "&paul		: " << &paul << endl;
	cout << "melissa	: " << melissa << endl;
	cout << "&melissa	: " << &melissa << endl;
	cout << "dave		: " << dave << endl;
	cout << "&dave		: " << &dave << endl;
	cout << "tom		: " << tom << endl;
	cout << "&tom		: " << &tom << endl;
	cout << "ramon		: " << ramon << endl;
	cout << "*ramon		: " << *ramon << endl;
	cout << "**ramon	: " << **ramon << endl;

	return 0;
}
