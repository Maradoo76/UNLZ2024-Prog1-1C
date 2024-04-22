//Hacer un programa que ir sumando los valores ingresados y finalice cuando se ingresa un numero negativo
#include <iostream>
using namespace std;

int main()
{
	float ingreso, acu, cont=1;
	
	while (ingreso>=0){
		cout << "Ingrese un valor para ser sumado. Con un numero negativo, finaliza el proceso (pos n." << cont << "-Total al momento: " <<acu << "): ";
		cin >> ingreso;
		if (ingreso>0){
			acu=acu+ingreso;
			cont++;
		}
	}
	cout << "La sumatoria de los " << cont-1 << " numeros ingresados es: " << acu;
	return(0);
}

