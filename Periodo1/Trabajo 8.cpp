// Autor: Erick Eduardo Martinez Ramos
// Ejercicios clase 4 (4)

#include <iostream>
#include <bitset>
using namespace std;

int main(){
	int x = 5;
	int y = 3;
	
	cout << "Decimal" << "\t \t Binario" << endl;
	cout << x << ":\t \t " << bitset<8>(x) << endl;
	cout << y << ":\t \t " << bitset<8>(y) << endl;
	
	//AND binario		x &= y seria igual a decir x = x& y
	int z = x & y;
	cout << "x & y : " << z << "\t " << bitset<8>(z) << endl;
	
	//OR binario		x |= y seria igual a decir x = x| y
	z = x | y;
	cout << "x | y : " << z << "\t " << bitset<8>(z) << endl;
	
	//XOR binario		x ^= y seria igual a decir x = x ^ y
	z = x ^ y;
	cout << "x ^ y : " << z << "\t " << bitset<8>(z) << endl;
	
	//Desplazamiento binario		x <<= y seria igual a decir x = x << y
	z = x << y;
	cout << "x << y : " << z << "\t " << bitset<8>(z) << endl;
	
	//Desplazamiento binario		x >>= y seria igual a decir x = x >> y
	z = x >> y;
	cout << "x >> y : " << z << "\t " << bitset<8>(z) << endl;
	
	return 0;
}
