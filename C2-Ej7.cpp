#include <iostream>
using namespace std;

int main()
{
    string nombre;
    string apellido;
    int edad;
    string direccion;
    string localidad;
    string prov;
    string pais;


    system("CLS");
    cout << "Impresion de datos de usuario" << std::endl;
    cout << "-----------------------------" << std::endl << std::endl;
    cout << "Ingrese los siguientes datos:" << std::endl << std::endl;
    cout << "Nombre: ";
    cin >> nombre;
    cout << "Apellido: ";
    cin >> apellido;
    cout << "Edad: ";
    cin >> edad;
    cout << "Direccion: ";
    cin >> direccion;
    cout << "Localidad: ";
    cin >> localidad;
    cout << "Provincia: ";
    cin >> prov;
    cout << "Pais: ";
    cin >> pais;

    system("CLS");

    cout << std::endl << "Listado de datos" << std::endl;
    cout << "----------------" << std::endl << std::endl;

    cout << "Nombre: " << nombre << std::endl;
    cout << "Apellido: " << apellido << std::endl;
    cout << "Edad: " << edad << std::endl;
    cout << "Direccion: " << direccion << std::endl;
    cout << "Localidad: " << localidad << std::endl;
    cout << "Provincia: " << prov << std::endl;
    cout << "Pais: " << pais << std::endl;
    
    return (0);
}