#include <iostream>
#include <string>
using namespace std;

int main()
{
	int cont=0, opcion=1;
	
	while (opcion !=0){
		system("CLS");
		cout << "Ciclo N." << cont << endl;
		cout << "Ingrese una opcion, el ciclo finaliza cuando ingrese 0" << endl;
		cin >> opcion;
		cont ++;
	}
	system("CLS");
	cout << "Se ejecutaron " << cont-1 << " ciclos.";
	return(0);
}
