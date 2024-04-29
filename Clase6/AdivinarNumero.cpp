//Implemenar un juego de adivinanzas en el que el usuario tenga que adivinar un numero secreto.
//El ciclo while se repetira hasta que el usuario divine el numero correcto.

#include <iostream>
using namespace std;

int main()
{
    int numeroAdivinar=45;
    int valor, cont=1;
    
    while (valor!=numeroAdivinar){
    	cout << "Ingrese un numero (interno " << cont << "): ";
    	cin >> valor;
    	cont=cont+1;
    	if((numeroAdivinar-valor<=5 and numeroAdivinar-valor>=1) or (valor-numeroAdivinar<=5 and valor-numeroAdivinar>=1)){
    		cout << "Tibio tibio..." << endl;
		}
	}
    
	cout << "Adivinaste el numero secreto!";
	
    return(0);
}
