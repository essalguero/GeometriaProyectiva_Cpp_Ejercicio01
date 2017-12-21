#pragma once

#include <iostream>

#include "common.h"


int intFromBinary(const std::string& number) {
	int valor = 0;

	for (int i = 0; i < number.length(); i++) {
		valor = valor << 1;
		if (number.at(i) == '1') {
			valor++;
		}
	}

	return valor;
}

std::string binaryFromInt(int x) {
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

void printIntAsBinary(int x) {
	cout << binaryFromInt(x);
}

void printBinaryAsInt(const std::string& number) {
	cout << intFromBinary(number);
}