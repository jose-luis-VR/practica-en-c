#include <iostream>
using namespace std;

int main(int arg, char *argv[]) {
	// Solicitar un n�mero y verificar si es par o impar
	// El operador de m�dulo % se utiliza para determinar si un n�mero es par o impar
	int numero;
	cout << "Ingrese un n�mero: ";
	cin >> numero;
	
	if (numero % 2 == 0) {
		cout << "El n�mero " << numero << " es par" << endl;
	} else {
		cout << "El n�mero " << numero << " es impar" << endl;
	}
	
	return 0;
}

