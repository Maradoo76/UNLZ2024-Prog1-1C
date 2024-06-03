#include <iostream>

using namespace std;

float dividir(int val1, int val2){
	if(val1>val2){
		return((float)val1/(float)val2);
	} else {
		return((float)val2/(float)val1);
	}
}

int mayor(int valor1, int valor2){
	if(valor1>valor2){
		return(valor1);
	} else {
		return(valor2);
	}
}

int menor(int valor1, int valor2){
	if(valor1<valor2){
		return(valor1);
	} else {
		return(valor2);
	}
}

int main (){
	int valor1;
	int valor2;
	
	cout << "Ingrese el primer valor : ";
	cin >> valor1;
	cout << "Ingrese el segundo valor : ";
	cin >> valor2;
	
	cout << "La division del mayor valor (" << mayor(valor1,valor2) << ") sobre el menor (" << menor(valor1,valor2) << ") es igual a " << dividir(valor1, valor2);
	
	return(0);
}
