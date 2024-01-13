#include <iostream>
using namespace std;

int main(int arg, char *argv[]) {
	// Solicitar un número y verificar si es par o impar
	// El operador de módulo % se utiliza para determinar si un número es par o impar
	int numero;
	cout << "Ingrese un número: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "El número " << numero << " es par" << endl;
	} else {
		cout << "El número " << numero << " es impar" << endl;
	}
	
	return 0;
}

