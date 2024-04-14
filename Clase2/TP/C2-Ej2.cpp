#include <iostream>
using namespace std;

int main()
{
    float cm;
    float metros;

    system("CLS");
    cout << "Conversion de centimetros a metros" << std::endl;
    cout << "----------------------------------" << std::endl << std::endl;
    cout << "Ingrese la cantidad de centimetros: ";
    cin >> cm;

    metros=cm/100;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    cout << cm << " centimetros es equivalente a " << metros << " metro/s. " << std::endl;
    return (0);
}