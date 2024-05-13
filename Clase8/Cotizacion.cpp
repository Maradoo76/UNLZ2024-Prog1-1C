/*Se necesita calcular una proyeccion de la cotizacion del dolar con respecto al peso argentino para los proximos 25 años

Se sabe el valor de este año: 860
Se sabe el valor del año que viene: 2345

Se sabe tambien que hay una depreciacion del 10% anual

Calcular para cada año hasta el 2049 el valor estimado de la cotizacion del dolar
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
	const int anios=25;
	const float depre=1.10;
	int cotizacion[anios];
	
	//Ingreso
	cotizacion[0]=860;
	cotizacion[1]=2345;
	
	//Calculo
	for(int i=2;i<anios;i++){
		cotizacion[i]=cotizacion[i-1]*depre;
	}
	
	//Resultados
	for (int i=0;i<anios;i++){
		cout << "Año " << 2024+i << ", cotizacion dolar $ " << cotizacion[i] <<endl;
	}
	
	return(0);
}
