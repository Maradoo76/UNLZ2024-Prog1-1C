#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    const float PI = 3.141592;
    float radio;
    float area;
    float peri;

    system("CLS");
    cout << "Calculo del area y perimetro de una circunferencia" << std::endl;
    cout << "--------------------------------------------------" << std::endl << std::endl;
    cout << "Ingrese el radio de la circunferencia: ";
    cin >> radio;

    area=pow(PI*radio,2);
    peri=(2*PI)*radio;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;
    
    cout << "El area de la circunferencia cuyo radio es " << radio << " equivale a " << area << std::endl;
    cout << "El perimetro de la circunferencia cuyo radio es " << radio << " equivale a " << peri << std::endl;

    return (0);
}