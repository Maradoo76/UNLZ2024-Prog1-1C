#include <iostream>
#include <string>
using namespace std;

int main()
{
		float valor=1, acum=0;
		int cont=0;
		
		while (valor!=0){
			cout << "Ingrese el valor " << cont << " para calcular el promedio, con 0 termina.";
			cin >> valor;
			acum+=valor;
			cont++;
		}
		cont=cont-1; // para que no tenga en cuenta el ultimo valor ingresado con cero
		cout << "Total " << acum << " valores ingresados " << cont <<endl;
		cout << "El promedio es " << acum / cont;
	
	return(0);
}
