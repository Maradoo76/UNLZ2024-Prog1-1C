/*Funciones
*/
#include <iostream>
#include <string>

using namespace std;

int Suma(int& x, int y){
	x=x+y;
	return x;
}

void Resta(int& x, int y){
	x=x-y;
}

int main(){
	int xr=10;
	Suma(xr,30);
	cout << xr << endl;
	
	Resta(xr,120);
	cout << xr << endl;
	return(0);
}


