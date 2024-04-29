//Contador de pares e impares. Contar cantidad de pares e impares ingresados. finalizar con cero.
//Mostrar valores de los contadores por pantalla

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int valor=0, contp=0, conti=0;
    string pares, impares;
    stringstream ss;
    
    do {
    	system("CLS");
    	cout << "Contar pares e impares" << endl;
    	cout << "----------------------";
    	cout << endl << endl;
    	cout << "Valores ingresados hasta el momento: " << contp+conti << endl;
    	cout << "Ingrese un numero, finaliza con cero: ";
    	cin >> valor;
    	ss.str("");
    	ss << valor;
    	if (valor!=0){
	    	if (valor%2==0){
	    		contp++;
	    		if (pares==""){
	    			pares=ss.str();
	    			
				} else {
					pares=pares+", "+ss.str();
				}
	    	} else {
	    		conti++;
	    		if (impares==""){
	    			impares=ss.str();
				} else {
					impares=impares+", "+ss.str();
				}
			}
		}
    } while (valor!=0);
    system("CLS");
    cout << "Resultados" << endl;
    cout << "----------";
    cout << endl << endl;
    cout << "Valores pares ingresados: " << contp << endl;
    if (contp>0){
    	cout << pares  << endl;
	}
    cout << "Valores impares ingresados: " << conti << endl;
    if (conti>0){
    	cout << impares << endl;
	}
    return (0);
}

