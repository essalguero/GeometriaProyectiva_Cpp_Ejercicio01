# include "Ejercicio02.h"

void Ejercicio02(string stringNumero) {

	int valorNumero = intFromBinary(stringNumero);

	int valorNumeroNegado = ~(valorNumero);

	string stringNumeroNegado = binaryFromInt(valorNumeroNegado);
	cout << "Ejercicio 2: " << endl;
	cout << "Valores Originales: " << endl;
	cout << "stringNumero: " << stringNumero << endl;
	cout << "valorNumero: " << valorNumero << endl << endl;

	cout << "Valores Negados:" << endl;
	cout << "stringNumeroNegado: " << stringNumeroNegado << endl;
	cout << "valorNumeroNegado: " << valorNumeroNegado << endl;


	int nuevoValor = valorNumero << 1;
	cout << "Valor shift << 1: " << nuevoValor << " --> " << binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 2;
	cout << "Valor shift << 2: " << nuevoValor << " --> " << binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 5;
	cout << "Valor shift << 5: " << nuevoValor << " --> " << binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 6;
	cout << "Valor shift << 6: " << nuevoValor << " --> " << binaryFromInt(nuevoValor) << endl;


	

}

unsigned int unsignedIntFromBinary(string numero) {

	
	unsigned int valorSinSigno = intFromBinary(numero);

	return valorSinSigno;
}

void printBinaryAsUnsignedInt(string numero) {
	cout << unsignedIntFromBinary(numero);
}

