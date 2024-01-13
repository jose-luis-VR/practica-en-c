#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	// DECLARACION Y USO DE BOOL 
	bool b0;
	
	b0 = true;
	cout << "variable con valor VERDADERO: " << b0 << endl;
	
	b0 = false;
	cout << "variable con valor FALSO: " << b0 << endl;
	
	// Asignacion de valores numericos.
	// Si es cero es falso, si es diferente de cero es verdadero.
	b0 = 0; // El valor se verá como false.
	cout << "variable con valor 0: " << b0 << endl;
	
	b0 = 1; // El valor se verá como true.
	cout << "variable con valor 1: " << b0 << endl;
	
	b0 = -100; // El valor se verá como true.
	cout << "variable con valor -100: " << b0 << endl;
	
	
	// Declaración de una cadena de caracteres
	char nombre[] = "jose";
	
	cout << "Imprimiendo el nombre '\\': " << nombre << endl;
	cout << "Imprimiendo el nombre[0] '\\': " << nombre[0] << endl;
	cout << "Imprimiendo el nombre[1] '\\': " << nombre[1] << endl;
	cout << "Imprimiendo el nombre[2] '\\': " << nombre[2] << endl;
	cout << "Imprimiendo el nombre[3] '\\': " << nombre[3] << endl;
	
	nombre[0] = 'J';
	nombre[1] = 'o';
	nombre[2] = 's';
	nombre[3] = 'e';
	return 0;
}
