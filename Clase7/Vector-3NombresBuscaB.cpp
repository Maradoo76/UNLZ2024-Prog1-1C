#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main()
{
	string vector [3];
	int tiene_b=0;
	
	for (int i=0;i<3;i++){
		cout << "Ingrese el nombre n." << i+1 << ": ";
		cin >> vector[i];
	}
	for (int i=0;i<3;i++){
		for (int j=0;j<vector[i].length();j++){
			if (vector[i].substr(j,1)=="B" or vector[i].substr(j,1)=="b"){
				tiene_b=1;
			}
		}
		if (tiene_b==1){
			cout << "El nombre de la posicion " << i+1 << " del vector incluye las letras b o B (" << vector[i] << ")" << endl;
		}
		tiene_b=0;
		
	}

	return(0);
}

