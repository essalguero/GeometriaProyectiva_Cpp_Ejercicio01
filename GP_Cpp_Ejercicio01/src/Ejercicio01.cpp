#include "Ejercicio01.h"

Ejercicio01::Ejercicio01(string numeroBinario) {
	cout << "Ejercicio01" << endl << endl;

	int valor01 = binarioBase10(numeroBinario);

	cout << "El numero 1010 binario se corresponde con el valor " << valor01 << " en base 10" << endl;
}

///Transforma la resentacion en binario (string pasado como parametro) de un numero a un numero entero
int Ejercicio01::binarioBase10(string numero) {
	return Common::intFromBinary(numero);
}