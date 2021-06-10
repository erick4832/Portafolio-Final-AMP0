#include <iostream>

using namespace std;

int main(){
	
	char c = 'T', d = 'S';
	char *p1 = &c;
	char *p2 = &d;
	char *p3;
	
	p3 = &d;
	cout << "*p3 = " << *p3 << endl; 	 // (1) S

	
	p3 = p1;
	cout << "*p3 = " << *p3 			// (2) T
	<< ", p3 = " << (void*)p3 << endl;  // (3) 6940

	
	*p1 = *p2;
	cout << "*p1 = " << *p1 			// (4) S
	<< ", p1 = " << (void*)p1 << endl;  // (5) 6940
	



	
	int *p;
	int i;
	int k;
	i = 42;
	k = i;
	p = &i;
	
	*p = 75;
	
	//  d) *p = 75; cambia i a 75
	
	cout << i << endl;


	
//		char c = 'A';
//		double *p = &c; 

// No se puede convertir un "char*" a "double"
// El tipo de datos del puntero p no coincide con el tipo de datos de la variable c




char bloques[3] = {'A','B','C'};
 	char *ptr = &bloques[0];
 	char temp;
 	

 	
 	temp = bloques[0]; // A
 	cout << temp << endl;
 	
	temp = *(bloques + 2); // C
 	cout << temp << endl;
 	
	temp = *(ptr + 1); // B
 	cout << temp << endl;
 	
	temp = *ptr; // A
	cout << temp << endl;
	
	cout << (void*)ptr << endl; //4434
 	
 	ptr = bloques + 1; // A
 	cout << temp << endl;
 	
 	temp = *ptr; // B
 	cout << temp << endl;
 	
 	temp = *(ptr + 1); // C
 	cout << temp << endl;
 	
 	ptr = bloques; // C
 	cout << (void*)temp << endl;
 	
 	temp = *++ptr; // B
 	cout << temp << endl;
 	
 	temp = ++*ptr; // C
 	cout << temp << endl;
 	
 	temp = *ptr++; // C
 	cout << temp << endl;
 	
 	temp = *ptr; // C
 	cout << temp << endl;
	
	
	
	return 0;	
	
	}
