// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 14 / 4 / 2021 (2)

#ifndef CIRCULO
#define CIRCULO

#include<cmath>

const double PI = 3.14159265;

// Especificacion de la clase
class Circulo{
	private:
		double radio;		// Con el puntero this-> nos aseguramos de estar usando este valor
	public:
		Circulo(double r);
		double getRadio();
		double calcularArea();
		double calcularDiametro();
		double calcularPerimetro();
};

// implementacion del constructor
Circulo::Circulo(double r){
	this->radio = r;
}

// Implementacion de los metodos
double Circulo::getRadio(){
	return this->radio;
}

double Circulo::calcularArea(){
	return PI * pow(this->radio, 2);
}

double Circulo::calcularDiametro(){
	return 2 * this->radio;
}

double Circulo::calcularPerimetro(){
	return 2 * PI * this->radio;
}

#endif
