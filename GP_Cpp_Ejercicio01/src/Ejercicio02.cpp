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


}