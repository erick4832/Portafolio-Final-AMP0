// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 14 / 4 / 2021 (4)

// Ejemplo de clase amigo

#include <iostream>

using namespace std;

class Cuadrado;		// prototipo de clase

class Rectangulo{
		double ancho, alto;
	public:
		double area(){ return (ancho * alto); }
		void convertir (Cuadrado a);
};

class Cuadrado{
	friend class Rectangulo;
	private:
		double lado;
	public:
		Cuadrado(double a) : lado(a) {}
};

void Rectangulo::convertir(Cuadrado a){
	ancho = a.lado;
	alto = a.lado;
}

int main(){
	Rectangulo r1;		//Creamos un rectangulo vacio
	Cuadrado c1(4);		//Creamos un cuadrado con cada lado midiendo 4 unidades
	r1.convertir(c1);	//Convertimos el cuadrado en un rectangulo
	cout << r1.area();	//Ahora podemos utilizar los metodos de la clase rectangulo
	
	return 0;
}
