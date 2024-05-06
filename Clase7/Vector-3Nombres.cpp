#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string vector [3];	
	
	for (int i=0;i<3;i++){
		cout << "Ingrese el nombre n." << i+1 << ": ";
		cin >> vector[i];
	}
	for (int i=2;i>=0;i--){
		cout << "El valor de la posicion " << i+1 << " del vector es igual a " << vector[i] << endl;
	}

	return(0);
}
