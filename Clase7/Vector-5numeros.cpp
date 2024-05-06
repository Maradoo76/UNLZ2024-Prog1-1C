#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

//Pedir por pantalla 5 valores y guardarlos en un array. Mostrar por pantalla la posicion que corresponde a los numeros impares
// Mostrar por pantalla los numeros que son divisibles por 3.
int main()
{
	int vector [5];	
	int divisible=0;
	int impar=0;
	int cantimpares=0;
	int cantdivisibles=0;
	
	for (int i=0;i<5;i++){
		cout << "Ingrese valor n." << i+1 << ": ";
		cin >> vector[i];
	}
	for (int i=0;i<5;i++){
		if (vector[i]%3==0){
			divisible=1;
			cantdivisibles++;
		} else {
			divisible=0;
		}
		if (vector[i]%2!=0){
			impar=1;
			cantimpares++;
		} else {
			impar=0;
		}
		if(impar==1 and divisible==1){
			cout << "La posicion " << i+1 << " tiene un valor divisible por 3 y ademas es impar (" << vector[i] << ")" << endl;
		}
		if(impar==1 and divisible==0){
			cout << "La posicion " << i+1 << " tiene un valor impar (" << vector[i] << ")" << endl;
		}
		if(impar==0 and divisible==1){
			cout << "La posicion " << i+1 << " tiene un valor divisible por 3 (" << vector[i] << ")" << endl;
		}		
	}
	if(cantimpares>0){
		cout << "La cantidad de valores impares ingresados es de " << cantimpares << endl;
	} else {
		cout << "No se ingresaron valores impares" << endl;
	}
	if(cantdivisibles>0){
		cout << "La cantidad de valores divisibles por tres es de " << cantdivisibles << endl;
	} else {
		cout << "No se ingresaron valores divisibles por tres" << endl;
	}
	return(0);
}
