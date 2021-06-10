// Autor Erick Eduardo Martinez Ramos
// Ejercicios Clases y Objetos (1)

#include <iostream>

using namespace std;

class CuentaBancaria{
	
	string nombreTitular;
	int numeroCuenta;
	double saldo;
	
	public:
		CuentaBancaria();
		void setDetalles();
		void getSaldo();
		void getNumeroCuenta();
		void getNombreTitular();
		void depositar();
		void retirar();
};

CuentaBancaria::CuentaBancaria(){
	saldo = 0;
}

void CuentaBancaria::setDetalles(){
	cout << "Introduce el saldo: ";
	cin >> saldo;
	cout << "Introduzca el numero de la cuenta: ";
	cin >> numeroCuenta;
	cout << "Introduzca el nombre del titular de la cuenta: ";
	cin >> nombreTitular;
}

void CuentaBancaria::getSaldo(){
	cout << "El saldo en la cuenta es: $" << saldo << endl;
}

void CuentaBancaria::getNumeroCuenta(){
	cout << "El numero de la cuenta es: " << numeroCuenta << endl;
}

void CuentaBancaria::getNombreTitular(){
	cout << "El titular de la cuenta es: " << nombreTitular << endl;
}

void CuentaBancaria::depositar(){
	double importeDeposito;
	
	cout << "Ingrese el monto que desea depositar: ";
	cin >> importeDeposito;
	
	saldo = saldo + importeDeposito;
	
	cout << "El nuevo saldo en la cuenta es: " << saldo << endl;
	
}

void CuentaBancaria::retirar(){
	double importeRetiro;
	
	cout << "Ingrese el monto que desea retirar: ";
	cin >> importeRetiro;
	
	if(importeRetiro>saldo)
		cout << "No tiene saldo suficiente para ese retiro" << endl;
	else{
		saldo = saldo - importeRetiro;
		cout << "El nuevo saldo en la cuenta es: " << saldo << endl;
	}	
}

int main(){
	CuentaBancaria miCuenta;
	miCuenta.setDetalles();
	
	cout << endl << "Los detalles de la cuenta bancaria son: ";
	miCuenta.getNombreTitular();
	miCuenta.getNumeroCuenta();
	miCuenta.getSaldo();
	
	miCuenta.depositar();
	miCuenta.retirar();
	
	return 0;
}
