// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 26 / 4 / 2021 (2)

#include <iostream>
#include <stack>

// Stacks o Pilas

using namespace std;

void imprimir(stack <double> mystack){
	stack <double> segundaPila = mystack;
	cout << "_TOP_" << endl;
	while(!segundaPila.empty()){
		cout << "|" << segundaPila.top() << "|";
		segundaPila.pop();
	}
	cout << "_BOT_" << endl << endl;
}

int main(){
	char continuar = 's';
	stack <double> mystack;
	double valor;
	
	mystack.push(1.2);
	imprimir(mystack);
	mystack.push(25);
	imprimir(mystack);
	mystack.push(78);
	imprimir(mystack);
	mystack.push(15.4);
	imprimir(mystack);
	mystack.push(98.5);
	imprimir(mystack);
	mystack.push(85);
	imprimir(mystack);
	mystack.push(1.3);
	imprimir(mystack);
	mystack.push(24);
	imprimir(mystack);
	mystack.push(3.25);
	imprimir(mystack);
	
	cout << "Tamanio de la pila: ";
	cout << mystack.size() << endl << endl;
	
	while(!mystack.empty()){
		imprimir(mystack);
		mystack.pop();
	}

/*
	while(!mystack.empty()){
		cout << mystack.top() << endl;
		mystack.pop();
	}
*/
		
	return 0;
}
