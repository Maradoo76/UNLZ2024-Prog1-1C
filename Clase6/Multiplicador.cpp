//Ingresar un numero de 1 al 9, mostrar cada uno de los renglones de su tabla de multiplicar
//

#include <iostream>
using namespace std;

int main()
{
    int valor=1, cont=1, maximo=1;
    
    do {
    	system("CLS");
    	cout << "Ingrese los valores de multiplicando y multiplacador. Ambos entre 1 y 9" << endl;
    	cout << "-----------------------------------------------------------------------";
    	cout << endl << endl;
    	if (valor<1 or valor>9 or maximo<1 or maximo>9){
    		cout << "RECUERDE QUE LOS VALORES DEBEN SER ENTRE 1 Y 9!" << endl;
		}
    	cout << "Ingrese el multiplicando: ";
	    cin >> valor;
    	cout << "Ingrese el maximo multiplicador: ";
	    cin >> maximo;
	} while (valor<1 or valor>9 or maximo<1 or maximo>9);
    while (cont<maximo+1){
    	
    	cout << valor << " * " << cont << " = " << valor*cont << endl;
		cont++;
	}
    return(0);
}
