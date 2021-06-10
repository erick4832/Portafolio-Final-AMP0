#include <iostream>
#include "Trabajo Colas.h"

using std::cin;
using std::cout;
using std::endl;

int main(){
	
	Cola<int> c;
	c.enqueue(10);
	cout << "	  | Inicio | -------------------------- | Final |" << endl;
	cout << "La cola es: " << c.colaComoCadena() << endl << endl;
	c.enqueue(11);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(12);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(13);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(14);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.dequeue();
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(15);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(16);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(17);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(18);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(19);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	c.enqueue(20);
	cout << "La cola es: " <<c.colaComoCadena() << endl << endl;
	cout << "Primero en la cola o Queue: " << c.dequeue() << endl;
}
