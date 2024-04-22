//Hacer un programa que permita ir desde un numero hasta cero

#include <iostream>
using namespace std;

int main()
{
    int a,maximo;
    cout << "Ingrese el numero desde el que quiere comenzar la cuenta regresiva: ";
    cin >> maximo;
	
	//Con DO
	/*a=maximo;
	do {
		cout << maximo << endl;
		if(a<0){
			maximo++;
		} else {
			maximo--;
		}
	} while (maximo!=0);
	cout << maximo << endl;*/
	
	//Con FOR
	/*if (maximo>0){
		for(int a=maximo;a>=0;a--){
			cout << a << endl;
		}
	} else {
		for(int a=maximo;a<=0;a++){
			cout << a << endl;
		}
	}*/
	
	
	//Con While
	a=maximo;
	while (maximo!=0) {
		cout << maximo << endl;
		if(a<0){
			maximo++;
		} else {
			maximo--;
		}
	} while (maximo!=0);
	cout << maximo << endl;
	
    return(0);
}
