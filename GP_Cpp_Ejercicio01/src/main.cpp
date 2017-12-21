# pragma once

#include <string>
#include <iostream>

#include "common.h"

#include "Ejercicio00.h"
#include "Ejercicio02.h"

using namespace std;

void main(int argc, char** argv) {

	cout << "main function" << endl;

	printIntAsBinary(0);
	cout << endl;
	printIntAsBinary(1);
	cout << endl;
	printIntAsBinary(2);
	cout << endl;
	printIntAsBinary(4);
	cout << endl;
	printIntAsBinary(8);
	cout << endl;
	printIntAsBinary(16);
	cout << endl;
	printIntAsBinary(1025);
	cout << endl;


	printBinaryAsInt("00000000");
	cout << endl;
	printBinaryAsInt("00000001");
	cout << endl;
	printBinaryAsInt("00000010");
	cout << endl;
	printBinaryAsInt("00000100");
	cout << endl;
	printBinaryAsInt("00001000");
	cout << endl;
	printBinaryAsInt("00010000");
	cout << endl;
	printBinaryAsInt("10000000001");
	cout << endl;
	cout << endl;
	cout << endl;


	int valor01 = binarioBase10("1010");

	cout << "El numero 1010 binario se coresponde con el valor " << valor01 << " en base 10" << endl;

	cout << endl << endl;

	Ejercicio02("1010");

	int valor02 = ~0;
	string stringValor02 = binaryFromInt(valor02);
	cout << "El numero ~0 es en binario: " << stringValor02 << " Que es el valor unsigned: ";
	printBinaryAsUnsignedInt(stringValor02);
	cout << " Y con signo: ";
	printBinaryAsInt(stringValor02);
	cout << endl << endl;

}