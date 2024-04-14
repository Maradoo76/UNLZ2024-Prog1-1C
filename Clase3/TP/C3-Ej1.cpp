#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3,mayor;

    system("CLS");
    cout << "Calculo el mayor entre tres numeros" << std::endl;
    cout << "-----------------------------------" << std::endl << std::endl;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
	
	cout << "Ingrese el segundo numero: ";
    cin >> n2;
    
    cout << "Ingrese el tercer numero: ";
    cin >> n3;

	if (n1>n2 and n1>n3) {
		mayor=n1;
	} else {
		if (n2>n1 and n2>n3){
			mayor=n2;
		} else {
			mayor=n3;
		}
	}
	
    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;
        
	cout << "El numero mayor es " << mayor;
    
    return (0);
}
