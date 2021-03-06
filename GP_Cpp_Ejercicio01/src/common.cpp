#pragma once

#include <iostream>

#include "common.h"


///Realiza un test, no muy intensivo, para  probar que el funcionamiento de las funciones es correcto
void Common::test() {
	Common::printIntAsBinary(0);
	cout << endl;
	Common::printIntAsBinary(1);
	cout << endl;
	Common::printIntAsBinary(2);
	cout << endl;
	Common::printIntAsBinary(4);
	cout << endl;
	Common::printIntAsBinary(8);
	cout << endl;
	Common::printIntAsBinary(16);
	cout << endl;
	Common::printIntAsBinary(1023);
	cout << endl;
	Common::printIntAsBinary(1025);
	cout << endl;
	cout << endl;


	Common::printBinaryAsInt("00000000");
	cout << endl;
	Common::printBinaryAsInt("00000001");
	cout << endl;
	Common::printBinaryAsInt("00000010");
	cout << endl;
	Common::printBinaryAsInt("00000100");
	cout << endl;
	Common::printBinaryAsInt("00001000");
	cout << endl;
	Common::printBinaryAsInt("00010000");
	cout << endl;
	Common::printBinaryAsInt("1111111111");
	cout << endl;
	Common::printBinaryAsInt("10000000001");
	cout << endl;
	cout << endl;
	cout << endl;
}

/// Genera un numero entero a partir de una cadena que representa un numero binario
int Common::intFromBinary(const std::string& number) {
	int valor = 0;

	for (int i = 0; i < number.length(); i++) {
		valor = valor << 1;
		if (number.at(i) == '1') {
			valor++;
		}
	}

	return valor;
}

/// Genera una cadena que representa el valor binario del entero pasado como parametro
string Common::binaryFromInt(int x) {
	string numero = "";

	int valorComparacion = 1;
	int valor = x;
	
	for (int i = 0; i < sizeof(int) * 8; i++) {
		if (valorComparacion & valor) {
			numero = "1" + numero;
		}
		else {
			numero = "0" + numero;
		}

		valor = valor >> 1;
	}

	return numero;
}

/// Imprime el numero entero pasado como parametro en formato binario
void Common::printIntAsBinary(int x) {
	cout << binaryFromInt(x);
}

/// Imprime el string pasado como parametro, que representa un numero en binario,como un entero
void Common::printBinaryAsInt(const std::string& number) {
	cout << intFromBinary(number);
}