// Autor Erick Eduardo Martinez Ramos
// Aplicacion de aprendizajes del periodo 1

#include <iostream>
#include <string>
#include <cmath>

using namespace std;

double solicitarNumero(string queNumero){
	int numero;
	cout << queNumero << ": ";
	
	while(!(cin >> numero)){
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Valor no valido. Intente de nuevo: ";
	}
	return numero;
}

void ladosTriangulo(){
	
	double lado1, lado2, lado3, resultado, semiperimetro, area ;
	
	cout << "Calculadora de area de un triangulo " << endl;
	cout << "Por favor ingresar los lados del triangulo." << endl;
	
	lado1 = solicitarNumero ("Primer lado");
	lado2 = solicitarNumero ("Segundo lado");
	lado3 = solicitarNumero ("Tercer lado");
	
//	Utilice la formula de Heron para obtener el area
	semiperimetro = (lado1 + lado2 + lado3)/2 ;
	
	resultado = (semiperimetro)*(semiperimetro-lado1)*(semiperimetro-lado2)*(semiperimetro-lado3);
	
	area = sqrt(resultado);
	
	cout << "El area del triangulo es: " << area << endl;
	
	
//	Comprobador del tipo de triangulo (no se porque no me ha servido)
	if ((lado1==lado2) && (lado1==lado3)){
		cout << "El triangulo es equilatero" << endl;
	}
	else if (lado1==lado2){
			cout << "El triangulo es isosceles" << endl;
		}
	else if (lado1==lado3){
			cout << "El triangulo es isosceles" << endl;
		}
	else if (lado3==lado2){
			cout << "El triangulo es isosceles" << endl;
		}
	else {
		cout << "El triangulo es escaleno" << endl;
	}


}

void numeroMayor(){
	
	double num1, num2, num3, num4, num5 ;
	
	cout << endl << "Comprobador de numero mayor " << endl;
	cout << "Por favor ingrese los numeros que desea comparar." << endl;
	
	num1 = solicitarNumero ("Primer numero");
	num2 = solicitarNumero ("Segundo numero");
	num3 = solicitarNumero ("Tercer numero");
	num4 = solicitarNumero ("Cuarto numero");
	num5 = solicitarNumero ("Quinto numero");
	
	if((num1 > num2) && (num1 > num3) && (num1 > num4) && (num1 > num5)){
		cout << num1 << " es el numero mayor" << endl;
	}
	else if ((num2 > num1) && (num2 > num3) && (num2 > num4) && (num2 > num5)){
		cout << num2 << " es el numero mayor" << endl;
	}
	else if ((num3 > num1) && (num3 > num2) && (num3 > num4) && (num3 > num5)){
		cout << num3 << " es el numero mayor" << endl;
	}
	else if ((num4 > num1) && (num4 > num2) && (num4 > num3) && (num4 > num5)){
		cout << num4 << " es el numero mayor" << endl;
	}
	else if ((num5 > num1) && (num5 > num2) && (num5 > num3) && (num5 > num4)){
		cout << num5 << " es el numero mayor" << endl;
	}
	
}

void promedioNumeros(){
	
	double promedio;
	int numero, suma=0, i=0;
	
	cout << endl << "Ingrese los numeros de los que desea obtener el promedio, para concluir introduzca 0" << endl;
	
	do {
		numero = solicitarNumero ("Ingrese un numero ");
		suma += numero ;
		i++ ;
		promedio = suma / i;
		cout << "El promedio de los numeros ingresados hasta ahora es: " << promedio << endl;
	}
	while (numero > 0);
	
}

int main(){
	
	cout << "Trabajo de aplicacion Aplicación de aprendizajes del periodo 1 de Erick Eduardo Martinez Ramos" << endl << endl;
	
	ladosTriangulo();
	
	numeroMayor();
	
	promedioNumeros();
	
	return 0;
}
