#include "Ejercicio04.h"


Ejercicio04::Ejercicio04() {
	
	cout << "Ejercicio 04" << endl << endl;

	ApartadoA();
	ApartadoB();
	ApartadoC();
	ApartadoD();
	ApartadoE();
	ApartadoF();
	ApartadoG();
	ApartadoH();
}

void Ejercicio04::ApartadoA() {

	cout << "Apartado a" << endl << endl;

	double raizMenosUno = sqrt(-1);

	cout << "El valor de sqrt(-1) es: " << raizMenosUno << endl << endl << endl;

	
}

/// La division 0/0 genera una excepcion. Consultando en algunos foros en internet, se llega a la conclusión de que la excepcion no puede capturarse 
/// en un bloque try-catch. Por ese motivo se deja representada la operación (linea comentada dentro del método)
void Ejercicio04::ApartadoB() {
	cout << "Apartado b" << endl << endl;

	int zero = 0;
	double zeroDividedZero = 0;
	//Comentado Exception
	//zeroDividedZero = zero / zero;
	cout << "El valor de 0/0 es: Una excepcion. No se puede capturar con un try-catch normal" << endl << endl << endl;
}

void Ejercicio04::ApartadoC() {
	cout << "Apartado c" << endl << endl;

	int zero = 0;
	cout << "El valor de 1.0f / 0f es: " << 1.0f / static_cast<float>(zero) << endl << endl << endl;
}

void Ejercicio04::ApartadoD() {
	cout << "Apartado d" << endl << endl;

	float point2 = 0.2f;
	printf("%1.16f\n\n\n", point2);
}

void Ejercicio04::ApartadoE() {
	cout << "Apartado e" << endl << endl;
	cout << "Limitaciones de precisión con el formato" << endl << endl << endl;
}

void Ejercicio04::ApartadoF() {
	cout << "Apartado f" << endl << endl;

	cout << "Sumando - ver resultados en apartado g" << endl << endl << endl;
	float f = 0.1f;
	
	this->sum = 0;


	for (int i = 0; i < 100; ++i)
		this->sum += f;
	this->product = f * 100;
}

void Ejercicio04::ApartadoG() {
	cout << "Apartado g" << endl << endl;

	cout << "Numero mediante sumas: ";

	printf("%1.15f\n", this->sum);
	cout << "Numero mediante producto: ";

	printf("%1.15f\n\n\n", product);
}

void Ejercicio04::ApartadoH() {
	cout << "Apartado h" << endl << endl;

	float margen = 0.00001;
	bool iguales = (abs(this->product - this->sum) <= margen);
	string stringIguales = (iguales == 1) ? "true" : "false";
	cout << "Un método para comprobar si dos números en coma flotante son iguales es asignar ";
	cout << "un margen en el que pueden diferir y aún considerar que son iguales, es decir, ";
	cout << "definir un margen de error:" << endl << endl;

	cout << "product y sum son iguales si hay una diferencia de menos de " << margen << endl;
	cout << "product == sum: " << stringIguales << endl;
	cout << "product - sum = " << abs(this->product - this->sum) << endl << endl << endl;
}
