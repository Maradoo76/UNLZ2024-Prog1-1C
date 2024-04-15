#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cont=1, opcion=1;
	
	do {
	
		system("CLS");
		cout << "Ciclo N." << cont << endl;
		cout << "Ingrese una opcion, el ciclo finaliza cuando ingrese 0" << endl;
		cin >> opcion;
		cont ++;
	} while (opcion !=0);
	
	system("CLS");
	cout << "Se ejecutaron " << cont-1 << " ciclos.";
	return(0);
}
