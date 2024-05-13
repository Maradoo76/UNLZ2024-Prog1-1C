/*Tenemos una billetera que tiene 10 bilkletes, pedirle al usuario que ingres el valor nominal de cada un o de esos billetes 
al finalizar, contar cuanto dinero tiene el usuario
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
		const int cantBilletes=10;
		int valor;
		int billetera[cantBilletes];
		
		valor=0;
		//Ciclo de carga de datos
		for (int i=0;i<cantBilletes;i++){
			cout << "Ingrese el valor del billete n." << i+1 << " ";
			cin >> billetera[i];
		}
		
		//Ciclo de procesamiento
		for (int i=0;i<cantBilletes;i++){
			valor=valor+billetera[i];
		}
		
		//Ciclo de resultado
		system("CLS");
		cout << "Billetes ingresados" << endl << endl;
		cout << "El total es $ " << valor << endl;
		for (int i=0;i<cantBilletes;i++){
			if (billetera[i]!=0){
				cout << billetera[i] << endl;
			}
		}
		return(0);
}
