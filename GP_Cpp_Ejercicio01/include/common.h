#pragma once

#include <string>

using namespace std;

static class Common {

public:

	static void test();

	static int intFromBinary(const std::string& number);
	static string binaryFromInt(int x);

	static void printIntAsBinary(int x);
	static void printBinaryAsInt(const std::string& number);

};