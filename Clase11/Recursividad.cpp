#include <iostream>

using namespace std;

int recursividad(int val1){
	if(val1<=0){
		return val1;
	} else {
		return val1 + recursividad(val1-1);
	}
}


int main (){
	int valor1;
	
	cout << "Ingrese un valor : ";
	cin >> valor1;
	
	cout << recursividad(valor1);
	
	return(0);
}
