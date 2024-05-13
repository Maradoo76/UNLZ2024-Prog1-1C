/*En un array de 5 elementos pedirle al usuario que los cargue. Cuando el usuario finalice la carga, debera indicar cual es el mayor ingresado y cual es la
posicion en la que lo ingreso
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	const int totval=5;
	int max=0;
	int posmax=0;
	int valores[totval];
	int tmp;
	
	//Ingreso
	for(int i=0;i<totval;i++){
		cout << "Ingrese valor n." << i+1 << " " ;
		cin >> valores[i];
	}
	
	//Calculo
	max=valores[0];
	posmax=0;
	for(int i=1;i<totval;i++){
		if(valores[i]>max){
			max=valores[i];
			posmax=i;
		}
	}
	
	//Resultado
	cout << endl << endl << "Resultados" << endl;
	for(int i=0;i<totval;i++){
		cout << "Valor n." << i+1 << " = " << valores[i];
		if (i==posmax){
			cout << " <<--Maximo";
		}
		cout << endl;
	}
	
	/*
	//Ordenar
	for(int i=0;i<totval;i++){
		for(int j=0;j<totval;j++){
			if(valores[j]>valores[i]){
				tmp=valores[i];
				valores[i]=valores[j];
				valores[j]=tmp;
			}
		}
	}
	
	cout << endl << endl << "Valores ordenados" << endl;
	for(int i=0;i<totval;i++){
		cout << "Valor n." << i+1 << " = " << valores[i] << endl;
	}*/
	return(0);	
}
