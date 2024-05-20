#include <iostream>

using namespace std;

void ordenar(int vector[], int tipo){
	int tmp;
	
	for (int i=0;i<10;i++){
		for (int j=0;j<10;j++){
			if (tipo==1){
				if (vector[j]>vector[i]){
					tmp=vector[i];
					vector[i]=vector[j];
					vector[j]=tmp;
				} 
			} else {
				if (vector[j]<vector[i]){
					tmp=vector[i];
					vector[i]=vector[j];
					vector[j]=tmp;
				} 
			}
		}
	}
}

void ingresar(int vector[]){
	for(int i=0;i<10;i++){
		cout << "Ingrese valor n." << i+1 << " ";
		cin >> vector[i];
	}
}

void listar(int vector[]){
	system("CLS");
	for(int i=0;i<10;i++){
		cout << "Valor n." << i+1 << " " << vector[i] << endl;
	}
}

int main(){
	int orden=1;
	int vector[9];
	
	ingresar(vector);
	system("CLS");
	while (orden!=3){
		cout << "Como lo desea ordenar (1-Ascendente 2-Descendiente 3-termina) ";
		cin >> orden;
		if(orden!=3){
			ordenar(vector, orden); //1-ascendente 2-descendiente 3-salir
			listar(vector);
		}
	}
}
