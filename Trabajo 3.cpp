// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 3 (2)

#include <iostream>
using namespace std;

int main(){
	
/*	
	int semana = 7; 
	int horasDia = 24;
	int minutos = 60;
	int segundos = 60;
	
	double diasTrabajados = 4.1;
	
	cout << "Total en horas = " << (diasTrabajados * 24);
*/

/*
	int var1 = 5;
	double var2 = 5.0;
	int var3 = 37;
	
	cout << "Total de dividir " << var3 << " entre " << var2 << " = " << var3 / var2;
*/

	cout << "Tamanio de char: " << sizeof (char) << " bytes" << endl;
	
	cout << "Tamanio de int: " << sizeof (int) << " bytes" << endl;
	
	cout << "Tamanio de int corto: " << sizeof (int short) << " bytes" << endl;
	
	cout << "Tamanio de int largo: " << sizeof (int long) << " bytes" << endl;
	
	cout << "Tamanio de int largo con signo: " << sizeof ( int long signed) << " bytes" << endl;
	
	cout << "Tamanio de int largo sin signo: " << sizeof (unsigned long int) << " bytes" << endl;
	
	cout << "Tamanio de float: " << sizeof (float) << " bytes" << endl;
	
	cout << "Tamanio de double: " << sizeof (double) << " bytes" << endl;
	
	cout << "Tamanio de wchar_t: " << sizeof (wchar_t) << " bytes" << endl;
	
	return 0;
}
