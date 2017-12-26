# pragma once

#include <string>
#include <iostream>


#include <excpt.h>
#include <Windows.h>

#include "common.h"

#include "Ejercicio00.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"

using namespace std;


/*class divisionbyzero_exception : public std::runtime_error {
public:
	divisionbyzero_exception() : std::runtime_error("Division by zero") {}
};

void translate_seh_exception(unsigned int exceptioncode, struct _EXCEPTION_POINTERS* pExp) {
	if (exceptioncode == 0xc0000094) throw divisionbyzero_exception();
}*/



// Filter for the stack overflow exception.  
// This function traps the stack overflow exception, but passes  
// all other exceptions through.   
int stack_overflow_exception_filter(int exception_code)
{
	if (exception_code == EXCEPTION_STACK_OVERFLOW)
	{
		// Do not call _resetstkoflw here, because  
		// at this point, the stack is not yet unwound.  
		// Instead, signal that the handler (the __except block)  
		// is to be executed.  
		return EXCEPTION_EXECUTE_HANDLER;
	}
	else
		return EXCEPTION_CONTINUE_SEARCH;
}



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

	//_set_se_translator(translate_seh_exception);
	int zero = 0;
	double zeroDividedZero = 0;
	//Comentado Exception
	//zeroDividedZero = zero / zero;
	//cout << "El valor de 0/0 es: " << zeroDividedZero << endl << endl;


	cout << "El valor de 1.0f / 0f es: " << 1.0f / static_cast<float>(zero) << endl;
	
	float point2 = 0.2f;
	printf("%1.16f\n", point2);



	float f = 0.1f;
	float sum = 0;
	for (int i = 0; i < 100; ++i)
		sum += f;
	float product = f * 100;	cout << "Numero mediante sumas: ";
	printf("%1.15f\n", sum);	cout << "Numero mediante producto: ";
	printf("%1.15f\n", product);

}