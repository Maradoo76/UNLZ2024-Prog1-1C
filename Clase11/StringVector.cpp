#include <iostream>

using namespace std;

int main(){
	string cadena;
	
	cadena="Hola mundo";
	
	for(int i=0;i<cadena.length();i++){
		cout << i << " = ";
		for(int j=0;j<i;j++){
			cout << cadena[j];
		}
		if(i>0){
			cout << " ";
		}
		cout << cadena[i] << " ";
		for(int j=i+1;j<cadena.length();j++){
			cout << cadena[j];
		}
		cout << endl;
	}
	
	cout << endl << endl;
	
	for(int i=0;i<cadena.length(); i++){
		cout << cadena[i];
		if(cadena[i]==' '){
			cout << endl;
		}
	}
}
