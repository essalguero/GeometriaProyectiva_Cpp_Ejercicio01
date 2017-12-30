#pragma once

#include <string>;

#include <iostream>;

#include "common.h"

using namespace std;

class Ejercicio03 {
public:

	Ejercicio03();

	void ApartadoA();
	void ApartadoB();
	void ApartadoC();
	void ApartadoC_i();
	void ApartadoC_ii();

	static string binaryFromChar(const char);

	static string binaryFromUnsignedChar(const unsigned char);

	static void test();
};