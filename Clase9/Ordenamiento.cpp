/*Ordenamiento por burbuja
*/

#include <iostream>

using namespace std;
int vector[6];

void ordenar(){
	int tmp;
	
	for(int i=0;i<7;i++){
		for(int j=0;j<7;j++){
			cout << "Valor en posicion i " << i << " = " << vector[i] << " valor en posicion j " << j << " = " << vector[j] << endl;
			
			if(vector[j]>vector[i]){
				tmp=vector[i];
				vector[i]=vector[j];
				vector[j]=tmp;
				cout << "---> Nuevo valor en posicion i " << i << " = " << vector[i] << " valor en posicion j " << j << " = " << vector[j] << endl;
			}
		}
		cout << "----------" << endl;
		
	}
}

int main(){
	
	int tmp;
	
	vector[0]=9;
	vector[1]=4;
	vector[2]=6;
	vector[3]=3;
	vector[4]=8;
	vector[5]=5;
	vector[6]=1;
	
	ordenar();
	for(int i=0;i<7;i++ ){
		cout << vector[i] << endl;
	}
	return(0);
}
