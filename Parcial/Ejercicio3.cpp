#include <iostream>

using namespace std;

int main(){
	int cont;
	float acu, prom, valor;
	
	cont=0;
	acu=0;
	do{
		cout << "Ingrese calificacion n." << cont+1 << " ";
		cin >> valor;
		if(valor>=1 && valor<=10){
			acu=acu+valor;
			cont++;
		} else {
			cout << "El valor ingresado no sera tenido en cuenta." << endl;
		}
	} while (valor!=0);
	if(cont>0){
		prom=(float)acu/cont;
		cout << endl << endl << "Se ingresaron " << cont << " calificaciones" << endl;
		cout << "El promedio de las calificaciones es " << prom;
	}
}
