# pragma once

#include <string>
#include <iostream>


#include "common.h"

#include "Ejercicio00.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"

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

	cout << "El numero 1010 binario se corresponde con el valor " << valor01 << " en base 10" << endl;

	cout << endl << endl;

	Ejercicio02("1010");

	int valor02 = ~0;
	string stringValor02 = binaryFromInt(valor02);
	int valor02Unsigned = unsignedIntFromBinary(stringValor02);
	cout << "El numero ~0 es en binario: " << stringValor02 << " Que es el valor unsigned: ";
	printBinaryAsUnsignedInt(stringValor02);
	cout << " Y con signo: ";
	printBinaryAsInt(stringValor02);
	cout << endl;

	valor02 = valor02 << 1;
	valor02Unsigned = valor02Unsigned << 1;
	cout << "El numero ~0 (con un shift lógico) es en binario: ";
	printIntAsBinary(valor02);
	cout << " Que es el valor signed: " << valor02 << " y unsigned: " << valor02Unsigned << endl << endl;



	cout << "Ejercicio02 c iii" << endl;

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



	cout << "Ejercicio 03" << endl;

	cout << "Apartado a" << endl << endl;

	int a = 4;
	int b = -4;
	int resultado = a + b;

	cout << "Numero a en binario: ";
	printIntAsBinary(a);
	cout << endl;

	cout << "Numero b en binario: ";
	printIntAsBinary(b);
	cout << endl;

	cout << "Numero a + b en binario: ";
	printIntAsBinary(resultado);
	cout << endl;


	cout << "Apartado b" << endl;
	cout << "Explicación: Numero b en complemento a 1 y se hace una suma" << endl << endl;


	cout << "Apartado c" << endl;
	char d = (char)128; // only 127
	char e = (char)-128;

	string dString = binaryFromChar(d);
	string eString = binaryFromChar(e);

	cout << "El valor de d -> (char)128 en binario es: " << dString << endl << endl;
	cout << "El valor de e -> (char)-128 en binario es: " << eString << endl << endl;


	cout << "Explicación: Hay un overflow de char con el valor 128" << endl << endl;

	dString = binaryFromUnsignedChar(d);
	cout << "El valor de d(" << static_cast<int> (d) << ") en binario es: " << dString << endl;
	cout << "Se corresponde con el valor: ";
	printBinaryAsInt(dString);
	cout << endl << endl;


	cout << "Ejercicio 04" << endl;

	cout << "Apartado a" << endl << endl;

	double raizMenosUno = sqrt(-1);

	cout << "El valor de sqrt(-1) es: " << raizMenosUno << endl << endl;

	cout << "Apartado b" << endl << endl;

	int zero = 0;
	double zeroDividedZero = 0;
	//Comentado Exception
	//zeroDividedZero = zero / zero;
	cout << "El valor de 0/0 es: " << zeroDividedZero << endl << endl;



	cout << "Apartado c" << endl << endl;

	cout << "El valor de 1.0f / 0f es: " << 1.0f / static_cast<float>(zero) << endl << endl;
	

	cout << "Apartado d" << endl << endl;

	float point2 = 0.2f;
	printf("%1.16f\n\n", point2);


	cout << "Apartado e" << endl << endl;
	cout << "Limitaciones de precisión con el formato" << endl << endl;


	cout << "Apartado f" << endl << endl;

	float f = 0.1f;
	float sum = 0;
	for (int i = 0; i < 100; ++i)
		sum += f;
	float product = f * 100;
	cout << "Apartado g" << endl << endl;	cout << "Numero mediante sumas: ";
	printf("%1.15f\n", sum);	cout << "Numero mediante producto: ";
	printf("%1.15f\n\n", product);


	cout << "Apartado h" << endl << endl;

	float margen = 0.00001;
	bool iguales = (abs(product - sum) <= margen);
	string stringIguales = (iguales == 1) ? "true" : "false";
	cout << "Un método para comprobar si dos números en coma flotante son iguales es asignar ";
	cout << "un margen en el que pueden diferir y aún considerar que son iguales, es decir, ";
	cout << "definir un margen de error:" << endl << endl;

	cout << "product y sum son iguales si hay una diferencia de menos de " << margen << endl;
	cout << "product == sum: " << stringIguales << endl;
	cout << "product - sum = " << abs(product - sum) << endl << endl << endl;

}