#include <string>
#include <iostream>

#include "common.h"

using namespace std;

void main(int argc, char** argv) {

	cout << "main function" << endl;

	cout << "Binario de 0: " << binaryFromInt(0) << endl;
	cout << "Binario de 1: " << binaryFromInt(1) << endl;
	cout << "Binario de 2: " << binaryFromInt(2) << endl;
	cout << "Binario de 4: " << binaryFromInt(4) << endl;
	cout << "Binario de 8: " << binaryFromInt(8) << endl;
	cout << "Binario de 16: " << binaryFromInt(16) << endl;
	cout << "Binario de 1025: " << binaryFromInt(1025) << endl;

	cout << "Int de 00000000: " << intFromBinary("00000000") << endl;
	cout << "Int de 00000001: " << intFromBinary("00000001") << endl;
	cout << "Int de 00000010: " << intFromBinary("00000010") << endl;
	cout << "Int de 00000100: " << intFromBinary("00000100") << endl;
	cout << "Int de 00001000: " << intFromBinary("00001000") << endl;
	cout << "Int de 00010000: " << intFromBinary("00010000") << endl;
	cout << "Int de 10000000001: " << intFromBinary("10000000001") << endl;
}