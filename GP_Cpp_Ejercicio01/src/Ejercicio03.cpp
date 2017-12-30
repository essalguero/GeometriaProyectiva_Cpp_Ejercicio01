#include "Ejercicio03.h"


Ejercicio03::Ejercicio03() {
	cout << "Ejercicio 03" << endl << endl;

	ApartadoA();
	ApartadoB();
	ApartadoC();
	ApartadoC_i();
	ApartadoC_ii();
}


void Ejercicio03::ApartadoA() {
	cout << "Apartado a" << endl << endl;

	int a = 4;
	int b = -4;
	int resultado = a + b;

	cout << "Numero a en binario: ";
	Common::printIntAsBinary(a);
	cout << endl;

	cout << "Numero b en binario: ";
	Common::printIntAsBinary(b);
	cout << endl;

	cout << "Numero a + b en binario: ";
	Common::printIntAsBinary(resultado);
	cout << endl << endl << endl;
}


void Ejercicio03::ApartadoB() {
	cout << "Apartado b" << endl << endl;
	cout << "Explicación: Numero b en complemento a 1 y se hace una suma" << endl << endl << endl;
}


void Ejercicio03::ApartadoC() {
	cout << "Apartado c" << endl << endl;
}


void Ejercicio03::ApartadoC_i() {
	cout << "Apartado c - i" << endl << endl;
	char d = (char)128; // only 127
	char e = (char)-128;

	string dString = binaryFromChar(d);
	string eString = binaryFromChar(e);

	cout << "El valor de d -> (char)128 en binario es: " << dString << endl;
	cout << "El valor de e -> (char)-128 en binario es: " << eString << endl << endl;
}


void Ejercicio03::ApartadoC_ii() {
	cout << "Apartado c - ii -> Explicación: Hay un overflow de char con el valor 128" << endl << endl;

	char d = (char)128; // only 127
	char e = (char)-128;

	string dString = binaryFromUnsignedChar(d);
	cout << "El valor de d(" << static_cast<int> (d) << ") en binario es: " << dString << endl;
	cout << "Se corresponde con el valor: ";
	Common::printBinaryAsInt(dString);
	cout << endl << endl << endl;
}



string Ejercicio03::binaryFromChar(const char c) {
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

string Ejercicio03::binaryFromUnsignedChar(const unsigned char c) {
	
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

void Ejercicio03::test() {
	char c = 'a';
	unsigned char uc = 'c';

	string cadena = binaryFromChar(c);
	cout << "El caracter (char) '" << c << "' en binario se representa por: " << cadena << endl << endl;

	cadena = binaryFromUnsignedChar(uc);
	cout << "El caracter (unsigned char) '" << uc << "' en binario se representa por: " << cadena << endl << endl;
}