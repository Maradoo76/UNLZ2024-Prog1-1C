#include <iostream>
using namespace std;

int main()
{
    int a,b;

    system("CLS");
    cout << "Calcular año bisiesto" << std::endl;
    cout << "----------------------------------" << std::endl << std::endl;
    cout << "Ingrese el año (AAAA): ";
    cin >> a;

	if ((a%4==0 and a%100!=0) or a%400==0) {
		b=1;
	} else {
		b=0;
	}
    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;

    if(b==1){
        cout << "El año " << a << " es bisiesto.";
    } else {
        cout << "El año " << a << " no es bisiesto.";
    }
	
    return (0);
}
