#include <iostream>
#include <string>

using namespace std;

int main(){
	int valor;
	
	cout << "Ingrese un numero: ";
	cin >> valor;
	
	bool valorIngresadoPositivo = (valor > 0);
	
	
	if (valorIngresadoPositivo) {
		cout << "El numero es positivo. ";
	}
	else if (valor == 0) {
		cout << "El numero es cero. ";
	}
	else {
		cout << "El numero es negativo. ";
	}
	
	if (valor%2 == 0){
		cout << "Ademas, es par.";
	} else {
		cout << "Ademas, es impar.";
	}
	return(0);
}
