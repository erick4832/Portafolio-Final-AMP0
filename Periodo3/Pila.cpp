#include <iostream>
#include "Trabajo Pilas.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	
	Pila<int> s;
	s.push(10);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(11);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(12);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(13);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(14);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.pop();
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(15);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(16);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(17);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(18);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(19);
	cout << "La pila es: " << s.pilaComoCadena() << endl << endl;
	s.push(20);
	cout << "Parte superior o top del stack: " << s.pop() << endl;
}
