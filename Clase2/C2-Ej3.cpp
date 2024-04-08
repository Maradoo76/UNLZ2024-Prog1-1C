#include <iostream>
using namespace std;

int main()
{
    float cotizreal;
    float pesos;
    float total;

    system("CLS");
    cout << "Conversion de monedas - Pesos a Reales" << std::endl;
    cout << "--------------------------------------" << std::endl << std::endl;
    cout << "Ingrese la cotizacion del Real en Pesos: ";
    cin >> cotizreal;
    cout << "Ingrese la cantidad de Pesos: ";
    cin >> pesos;

    total=pesos/cotizreal;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;


    cout << pesos << " pesos equivalen a " << total << " Reales." << std::endl;

    return (0);
}