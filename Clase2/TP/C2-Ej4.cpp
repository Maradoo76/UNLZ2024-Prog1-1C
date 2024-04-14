#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float lado;
    float area;
    float peri;
    float altura;

    system("CLS");
    cout << "Calculo del area y perimetro de un triangulo equilatero" << std::endl;
    cout << "-------------------------------------------------------" << std::endl << std::endl;
    cout << "Ingrese el tama~o de un lado del triangulo : ";
    cin >> lado;

    altura=(lado*sqrt(3))/2;
    area=pow(altura,2)/sqrt(3);
    peri=lado*3;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    cout << "El area del triangulo rectangulo es :" << area << std::endl;
    cout << "El perimetro del rectangulo es : " << peri << std::endl;

    return (0);
}