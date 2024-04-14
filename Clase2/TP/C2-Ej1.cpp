#include <iostream>
using namespace std;

int main()
{
    float base;
    float altura;
    float area;
    float peri;

    system("CLS");
    cout << "Calculo del area y perimetro de un rectangulo" << std::endl;
    cout << "---------------------------------------------" << std::endl << std::endl;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    area=base*altura;
    peri=(base+altura)*2;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    cout << "El area del rectangulo es :" << area << std::endl;
    cout << "El perimetro del rectangulo es : " << peri << std::endl;

    return (0);
}