// Autor Erick Eduardo Martinez Ramos
// Ejercicios Clases y Objetos (2)

#include <iostream>

using namespace std;

class persona{
	string nombres, apellidos;
	int anioNacimiento;
	
	public:
		persona();
		void nombreCompleto();
		void edad();
};

persona::persona(){
	nombres = "Erick Eduardo";
	apellidos = "Martinez Ramos";
	anioNacimiento = 2001;
}

void persona::nombreCompleto(){
	cout << "Nombre completo de la persona 1 es " << nombres << " " << apellidos << endl;
}

void persona::edad(){
	int Edad;
	Edad = 2021 - anioNacimiento;
	
	cout << "La edad de la persona 1 es: " << Edad << endl;
}

int main(){
	
	persona persona1;
	
	persona1.nombreCompleto();
	persona1.edad();
}
	
