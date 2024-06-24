#include <iostream>

using namespace std;

int main(){
	int vector[5];
	int vectorOri[5];
	int temp;
	int i,j;
	
	for(i=0;i<5;i++){
		cout << "Ingrese valor n." << i+1 << " ";
		cin >> vectorOri[i];
		vector[i]=vectorOri[i];
	}
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(vector[i]>vector[j]){
				temp=vector[i];
				vector[i]=vector[j];
				vector[j]=temp;
			}
		}
	}
	
	cout << endl << endl << "Valores en el orden ingresado" << endl;
	for(i=0;i<5;i++){
		cout << "Valor n." << i+1 << " " << vectorOri[i] << endl;
	}
	
	cout << endl << endl << "Valores ordenados" << endl;
	for(i=0;i<5;i++){
		cout << "Valor n." << i+1 << " " << vector[i] << endl;
	}
}
