#include "Ejercicio03.h"

string binaryFromChar(const char c) {
	string valor = "";
	char caracter = c;

	int valorComparacion = 1;

	for (int i = 0; i < sizeof(caracter) * 8; i++) {
		if (valorComparacion & caracter) {
			valor = "1" + valor;
		}
		else {
			valor = "0" + valor;
		}
		caracter = caracter >> 1;
	}


	return valor;

	
}

string binaryFromUnsignedChar(const unsigned char c) {
	
	string valor = "";
	int caracter = c;

	int valorComparacion = 1;

	for (int i = 0; i < sizeof(caracter) * 8; i++) {
		if (valorComparacion & caracter) {
			valor = "1" + valor;
		}
		else {
			valor = "0" + valor;
		}
		caracter = caracter >> 1;
	}


	return valor;
}