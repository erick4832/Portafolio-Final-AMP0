// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 3 (1)

#include <iostream>
#include <string>
using namespace std;

//#define PI 3.14159
//#define NUEVALINEA '\n'

const string AUTOR = "Autor: Erick Eduardo Ramos";
const double pi = 3.14159;
const char nuevalinea = '\n';

int main (){
	double radio = 7.0;
	double circulo;
// Calcular el perimetro
	
	circulo = 2 * pi * radio;
	cout << circulo  << " Es el tamanio de un circulo con un radio de 7" ;
	cout << nuevalinea;
	return 0;
}
