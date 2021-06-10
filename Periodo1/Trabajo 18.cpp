// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 8 (2)

#include "trabajo 17.h" 	// modulo personalizado se colocan entre comillas

using namespace std;

int main(){ 
	
	char continuar;
	
	do {
		int tipo = leerSeleccionUsuario();
		double temperatura = leerTemperatura();
		convertirTemperatura(tipo,temperatura);
		
		cout << "\nDesea convertir otra temperatura? (y/n): ";
		
		while(!(cin >> continuar)){
			
			cout << "Seleccione 'y' para continuar 'n' para terminar: ";
			cin.clear();				//limpiar la entrada erronea
			cin.ignore(1000, '\n');		//Ignorar hasta mil valores erroneos
			
		}
	}
	while (continuar == 'y');
	
	
	for (int i = 0; i < 10; i++) {
		if (i % 3 == 0 || i % 5 == 0) {
			continue;
		}
		cout << "Hola" << endl;
	}
	return 0;
	
}
