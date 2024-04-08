#include <iostream>
#include <string>

using namespace std;

int main(){
	int opcion = 1;
	int valor;
	int resultado=0;
	string operacion="";
	
	cout << "Ingrese un valor: ";
	cin >> valor;

	cout << endl << "1. Multiplicar por si mismo" << endl;
	cout << "2. Sumarse a si mismo" << endl;
	
	cout << endl << "Ingrese una opcion(" << opcion << "): " ;
	cin >> opcion;
	switch (opcion) {
		case 1:
			resultado = valor*valor;
			operacion = "multiplicacion";
			break;
		case 2:
			resultado = valor+valor;
			operacion = "suma";
			break;
		default:
			break;
	}
	
	if (operacion!=""){
		cout << "La " << operacion << " de si mismo es igual a " << resultado;
	} else {
		cout << "Opcion incorrecta";
	}
	
	return(0);
}
