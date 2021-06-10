// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 7 (1)

#include <iostream>
#include <string>

using namespace std;
/*
int main (){
	int contador = 1;					// Inicializacion
	while (contador < 6 ){				// Condicion
		cout << contador << ": Hola " <<endl;		// Modificacion
		contador++;
	}
	return 0;
}
*/
void HolaMundo(){
	int HolaMundo = 1;					// Inicializacion
	while (HolaMundo < 11 ){				// Condicion
		cout  << "Hola mundo" <<endl;		// Modificacion
		HolaMundo++;
	}
}

void imprimirAlfabeto(){
	char letra = 'A';
	int letraNum;
	while (letra <= 'Z'){
		cout << letra << "\n " << letraNum << " ";
		letra++;
		letraNum = letra;
	}
	cout <<endl;
}

void operarConX(){
	int x = 1;
	int i = 1;
	while (i <= 4){
		x = x + 2*i;
		i++;
	}
	cout << x;
}

int factorial(int n){
	int factorial = 1;
	int numFact = n;
	int i = 1;
	while (i <= numFact){
		factorial *= i;
		i++;
	}
	cout << n << "! : " << factorial;
}

void DoWhile(){
	int i = 0;
	do {
		cout << i << endl;
		i++;
	}
	while (i < 5);
}

void ingresarNum(){
	int num = 0;
	cout << " Ingrese un numero entre 0 y 10 : ";
	do{
		cin >> num;
	}
	while((num > 10) || (num<0));
}

void abcNveces(){
	for(int i = 0; i < 10; i++){
		for(char c = 'a'; c <= 'z'; c++){
			cout << c;
		}
		cout << endl;
	}
}

void BreakContinue(){
	int a = 5;
	for(int i = 1; i <= 10; i++){
		cout << "a : " << a << endl;
		cout << "i : " << i << endl;
		if (i % 2 == 0)
			continue;
		a = a + i;
		if (a > 20)
			break;
		cout << "a + i: " << a << endl;
	}
}

void obtenerLong(){
	string s = "Hola Mundo!";
	int longitud = s.length();
	char c = s.at(1);
	cout << longitud << endl;
	cout << c << endl;
}

int main(){
	
//	imprimirAlfabeto();

//	operarConX();

/*
	int n;
	cout << "Calcula el factorial de un numero, introduzca un numero : ";
	cin >> n;
	factorial(n);	
*/
	
//	DoWhile();

//	ingresarNum();

//	abcNveces();

//	BreakContinue();

	obtenerLong();	
	
	return 0;
}
