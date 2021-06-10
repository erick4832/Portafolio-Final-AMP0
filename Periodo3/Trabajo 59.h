        // Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 19 / 4 / 2021 (3)

#ifndef LISTA_H
#define LISTA_H
#include <iostream>

class ListaEnteros {
	private:
		int cuenta;
		int capacidad;
		int *items;
		void agrandar();
	public:
		ListaEnteros(int capacidad);
		ListaEnteros();
		~ListaEnteros();
		ListaEnteros(const ListaEnteros &otraLista);
		bool estaVacia();
		int tamanio();
		void insertar(int indice, int item);
		void adjuntar(int item);
		int obtener(int indice);
		bool contiene(int indice);
		int remover(int indice);
		void imprimirLista();
};

ListaEnteros::ListaEnteros(int capacidad){
	this->cuenta = 0;
	this->capacidad = capacidad;
	this->items = new int[capacidad];
}

ListaEnteros::~ListaEnteros(){
	delete[] items;
}

bool ListaEnteros::estaVacia(){
	return this->cuenta == 0;
}

int ListaEnteros::tamanio(){
	return this->cuenta;
}

int ListaEnteros::obtener(int indice){
	if(indice < 0 || indice >= this->cuenta) throw "indice fuera de rango";
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	return this->items[indice];
}


//Cuando se insertan se ponen en medio de la lista

void ListaEnteros::insertar(int indice, int item){
	if(indice < 0 || indice > this->cuenta) throw "Indice fuera de rango";
	if(this->cuenta >= this->capacidad) this->agrandar();

	for(int i = cuenta - 1; i >= indice; i--){
	this->items[i+1] = this->items[i];
	}

	this->items[indice] = item;
	this->cuenta++;
}


void ListaEnteros::agrandar(){
	int *temp = this->items;
	this->capacidad *=2;
	this->items = new int[capacidad];
	for(int i = 0; i < this->cuenta; i++){
	this->items[i] = temp[i];
	}
	delete[] temp;
}

//Cuando se adjuntan se ponen al final de la lista

void ListaEnteros::adjuntar(int item){
	this->insertar(this->cuenta, item);
}

bool ListaEnteros::contiene(int item){
	for(int i = 0; i < this->cuenta; i++){
	if(this->items[1] == item) return true;
	}
	return false;
}

int ListaEnteros::remover(int indice){
	if(this->estaVacia()) throw "No se puede recuperar elementos de una lista vacia";
	if(indice < 0 || indice >= this->cuenta) throw "Indice fuera de rango";
	
	int valor = this->items[indice];
	for(int i = indice; i < cuenta - 1; i++){
		this->items[i] = this->items[i+1];
	}
	this->cuenta--;
	return valor;
}

void ListaEnteros::imprimirLista(){
	std::cout << "| ";
	for(int i = 0; i < this->cuenta; i++){
		std::cout << this->obtener(i) << " | ";
	}
	std::cout << std::endl;
}

#endif
