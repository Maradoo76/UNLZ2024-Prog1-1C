#include <iostream>
#include <string>
using namespace std;

int main()
{
	int tot=1, totant=0, totant2=0, cont=1, valor=0;
	
	cout << "Ingrese un valor entero: ";
	cin >> valor;
	do {
		cout << "Iteraccion " << cont << " Tot " << totant << endl;
		totant2=tot;
		tot=tot+totant;
		totant=totant2;
		cont++;
	} while (tot<valor);
	cout << "Iteraccion " << cont << " Tot " << totant << endl;
	cout << "Contidad de iteracciones hasta llegar al valor indicado (" << valor << "): " << cont;
	return(0);
}
