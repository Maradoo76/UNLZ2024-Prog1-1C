#include <iostream>
#include <string>

using namespace std;

/*
Ingresar datos por teclado y luego mostrarlos por pantalla

Definir una funcion de IngresoDatos donde habra que escribir el codigo para pedir
los valores por teclado y otra funciona MostrarDatos para mostrarlos

*/
void IngresaDatos(string& X){
	cout << "Ingrese un dato : ";
	cin >> X;
}

void MostrarDatos(string X){
	cout << X << endl;
}

int main(){
	
	string X[2];
	
	for(int i=0;i<2;i++){
		IngresaDatos(X[i]);
	}
	system("CLS");
	for(int i=0;i<2;i++){
		MostrarDatos(X[i]);
	}
}
