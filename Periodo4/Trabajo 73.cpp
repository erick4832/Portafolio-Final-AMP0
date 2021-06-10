// Autor Erick Eduardo Martinez Ramos
// Ejercicios clase 31 / 5 / 2021 (4)

#include <iostream>
#include <list>

int main () {
	
  std::list<int> mylist;
  int myint;

  std::cout << "Por favor ingrese unos Enteros ( 0 para finalizar ):\n";

  do {
    std::cin >> myint;
    mylist.push_back (myint);
  } while (myint);
  
  std::cout << "\n mylist contiene:";
  for (std::list<int>::iterator it=mylist.begin(); it != mylist.end(); ++it)
    std::cout << ' ' << *it;

  std::cout << "\n mylist almacena " << mylist.size() << " numeros.\n";

  return 0;
}
