#include <string>
#include <iostream>

#include "common.h"

#include "Ejercicio00.h"
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


	int valor00 = binarioBase10("1010");

	cout << "El numero 1010 binario se coresponde con el valor " << valor00 << " base 10" << endl;
}