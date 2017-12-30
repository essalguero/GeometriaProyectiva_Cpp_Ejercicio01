#include "Ejercicio02.h"

Ejercicio02::Ejercicio02(string stringNumero) {

	cout << "Ejercicio 02:" << endl;

	ApartadoA(stringNumero);

	ApartadoB(stringNumero);

	ApartadoC();

	ApartadoC_i();

	ApartadoC_ii();

	ApartadoC_iii();
}


void Ejercicio02::ApartadoA(string stringNumero) {
	
	cout << "Apartado a: " << endl << endl;
	
	int valorNumero = Common::intFromBinary(stringNumero);
	int valorNumeroNegado = ~(valorNumero);
	string stringNumeroNegado = Common::binaryFromInt(valorNumeroNegado);
	
	cout << "Valores Originales: " << endl;
	cout << "stringNumero: " << stringNumero << endl;
	cout << "valorNumero: " << valorNumero << endl << endl;

	cout << "Valores Negados:" << endl;
	cout << "stringNumeroNegado: " << stringNumeroNegado << endl;
	cout << "valorNumeroNegado: " << valorNumeroNegado << endl << endl << endl;
}


void Ejercicio02::ApartadoB(string stringNumero) {
	cout << "Apartado b: " << endl << endl;

	int valorNumero = Common::intFromBinary(stringNumero);

	int nuevoValor = valorNumero << 1;
	cout << "Valor shift << 1: " << nuevoValor << " --> " << Common::binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 2;
	cout << "Valor shift << 2: " << nuevoValor << " --> " << Common::binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 5;
	cout << "Valor shift << 5: " << nuevoValor << " --> " << Common::binaryFromInt(nuevoValor) << endl;
	nuevoValor = valorNumero << 6;
	cout << "Valor shift << 6: " << nuevoValor << " --> " << Common::binaryFromInt(nuevoValor) << endl << endl << endl;
}


void Ejercicio02::ApartadoC() {
	cout << "Apartado c" << endl << endl;

	// Obtener un numero entero con todos los bits a 1 -> negando el cero
	int valor02 = ~0;
	string stringValor02 = Common::binaryFromInt(valor02);
	unsigned int valor02Unsigned = Ejercicio02::unsignedIntFromBinary(stringValor02);

	cout << "El numero ~0 es en binario: " << stringValor02 << " Que es el valor unsigned: ";
	Ejercicio02::printBinaryAsUnsignedInt(stringValor02);
	cout << " Y con signo: ";
	Common::printBinaryAsInt(stringValor02);
	cout << endl << endl;
}


void Ejercicio02::ApartadoC_i() {
	cout << "Apartado c - i" << endl << endl;

	// Obtener un numero entero con todos los bits a 1 -> negando el cero
	int valor02 = ~0;
	string stringValor02 = Common::binaryFromInt(valor02);
	unsigned int valor02Unsigned = Ejercicio02::unsignedIntFromBinary(stringValor02);

	int valor02Shift = valor02 << 1;
	unsigned int valor02UnsignedShift = valor02Unsigned << 1;
	cout << "El numero ~0 (con un shift lógico) es en binario: ";
	Common::printIntAsBinary(valor02Shift);
	cout << " Que es el valor signed: " << valor02Shift << " y unsigned: " << valor02UnsignedShift << endl << endl;
}


void Ejercicio02::ApartadoC_ii() {
	cout << "Apartado c - ii" << endl << endl;

	int valor02 = ~0;
	string stringValor02 = Common::binaryFromInt(valor02);
	unsigned int valor02Unsigned = Ejercicio02::unsignedIntFromBinary(stringValor02);
	int unidad = 1;

	valor02 = valor02 + unidad;
	valor02Unsigned = valor02Unsigned + unidad;

	valor02 = valor02 << 1;
	valor02Unsigned = valor02Unsigned << 1;

	cout << "El numero ~0 + 1 (con un shift lógico) es en binario: ";
	Common::printIntAsBinary(valor02);
	cout << " Que es el valor signed: " << valor02 << " y unsigned: " << valor02Unsigned << endl << endl;
}


void Ejercicio02::ApartadoC_iii() {
	cout << "Apartado c - iii" << endl << endl;

	int pink = 0xCC6699;
	int valorComparacion = 255;

	cout << "El valor de pink como numero entero es: " << pink << endl;

	int valorBlue = pink & valorComparacion;
	cout << "El valor Azul del color pink es: " << valorBlue << endl;

	pink = pink >> 8;

	int valorGreen = pink & valorComparacion;
	cout << "El valor Verde del color pink es: " << valorGreen << endl;

	pink = pink >> 8;

	int valorRed = pink & valorComparacion;
	cout << "El valor Rojo del color pink es: " << valorRed << endl;

	cout << endl << endl;
}

/// Transforma la cadena pasada como parametro, y que representa un número en binario, en un unsigned int y lo imprime
unsigned int Ejercicio02::unsignedIntFromBinary(string numero) {

	
	unsigned int valorSinSigno = Common::intFromBinary(numero);

	return valorSinSigno;
}

/// Imprime por pantalla la cadena pasada como parametro, y que representa un número en binario, en formato unsigned int
void Ejercicio02::printBinaryAsUnsignedInt(string numero) {
	cout << unsignedIntFromBinary(numero);
}

///Realiza un test, no muy intensivo, para  probar que el funcionamiento de las funciones es correcto
void Ejercicio02::test() {

	unsigned int valor;
	valor = Ejercicio02::unsignedIntFromBinary("00000000");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("00000001");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("00000010");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("00000100");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("00001000");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("00010000");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("1111111111");
	cout << valor << endl;
	valor = Ejercicio02::unsignedIntFromBinary("10000000001");
	cout << valor << endl << endl;


	Ejercicio02::printBinaryAsUnsignedInt("00000000");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("00000001");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("00000010");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("00000100");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("00001000");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("00010000");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("1111111111");
	cout << endl;
	Ejercicio02::printBinaryAsUnsignedInt("10000000001");
	cout << endl;
	cout << endl;
	cout << endl;
}