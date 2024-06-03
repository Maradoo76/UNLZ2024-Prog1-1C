#include <iostream>

using namespace std;

void ordenar(int vector[]);

int main(){
	int vec[5];
	
	for(int i=0;i<5;i++){
		cout << "Ingrese valor n." << i+1 << ": ";
		cin >> vec[i];
	}
	ordenar(vec);
	cout << "Ordenado:" << endl << endl;
	for(int i=0;i<5;i++){
		cout << vec[i] << endl;
	}
	return(0);
}

void ordenar(int vector[]){
	int aux;
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(vector[j]>vector[i]){
				aux=vector[i];
				vector[i]=vector[j];
				vector[j]=aux;
			}
		}
	}
	
}

