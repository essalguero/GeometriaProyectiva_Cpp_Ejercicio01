#pragma once

#include <iostream>
#include <string>

#include "common.h"

using namespace std;

class Ejercicio02 {
public:
	Ejercicio02(string);

	static unsigned int unsignedIntFromBinary(string);

	static void printBinaryAsUnsignedInt(string);

	void ApartadoA(string);
	void ApartadoB(string);
	void ApartadoC();


	void ApartadoC_i();
	void ApartadoC_ii();
	void ApartadoC_iii();

	static void test();
};