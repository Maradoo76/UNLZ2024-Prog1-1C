#include <iostream>

using namespace std;

int main()
{
    int nacim, edad, ahora;
    

    system("CLS");
    cout << "Calculo de edad" << std::endl;
    cout << "----------------------------------" << std::endl << std::endl;
    cout << "Ingrese el año de nacimiento (AAAA): ";
    cin >> nacim;

	cout << "Ingrese el año actual (AAAA): ";
    cin >> ahora;
    
	edad = ahora-nacim;
	
    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    if(edad>=18){
        cout << "La persona es mayor de edad (" << edad << ")";
        
    } else {
        cout << "La persona es menor de edad (" << edad << ")";
    }
	
    return (0);
}
