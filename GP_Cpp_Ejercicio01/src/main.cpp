# pragma once

#include <string>
#include <iostream>


#include "common.h"

#include "Ejercicio01.h"
#include "Ejercicio02.h"
#include "Ejercicio03.h"
#include "Ejercicio04.h"

using namespace std;


void main(int argc, char** argv) {

	cout << "main function" << endl << endl << endl;

	cout << "Testing common functions:" << endl << endl;
	Common::test();


	cout << "Testing functions created in Ejercicio02:" << endl << endl;
	Ejercicio02::test();


	cout << "Testing functions created in Ejercicio03:" << endl << endl;
	Ejercicio03::test();

	cout << endl;


	/*cout << "Ejercicio01" << endl << endl;

	int valor01 = Ejercicio01::binarioBase10("1010");

	cout << "El numero 1010 binario se corresponde con el valor " << valor01 << " en base 10" << endl;

	cout << endl << endl;*/

	new Ejercicio01("1010");

	cout << endl << endl;

	//cout << "Ejercicio02" << endl << endl;

	new Ejercicio02("1010");

	new Ejercicio03();
	
	new Ejercicio04();


}