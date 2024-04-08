#include <iostream>
using namespace std;

int main()
{
    const float velsonido = 343;
    float segundos;
    float metros;

    system("CLS");
    cout << "Calculo de la distancia a la que se encuentra una tormenta" << std::endl;
    cout << "----------------------------------------------------------" << std::endl << std::endl;
    cout << "Ingrese los segundos transcurridos entre el relampago y el trueno: ";
    cin >> segundos;

    metros=segundos*velsonido;

    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    cout << "La tormenta se encuentra a " << metros << " metros de distancia" << std::endl;

    return (0);
}