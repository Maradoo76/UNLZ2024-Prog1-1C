#include <iostream>
#include <string>

using namespace std;

int main(){
    float base;
    float altura;
    float total; 

    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    total=base*altura;

    if (total>25){
        cout << "El area es mayor a 25";
    } else {
        cout << "El area es menor o igual de 25";
    }
    
    cout << "(" << total << ")";
}
