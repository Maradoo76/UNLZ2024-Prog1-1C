#include <iostream>
using namespace std;

int main()
{
    int a;
    string msg;

    system("CLS");
    cout << "Dia de la semana" << std::endl;
    cout << "----------------" << std::endl << std::endl;
    cout << "Ingrese el numero de dia (1 a 7): ";
    cin >> a;

	msg = "El numero de dia ingresado equivale a ";
	switch (a) {
		case 1:
			msg=msg + "lunes.";
			break;
		case 2:
			msg=msg + "martes.";
			break;
		case 3:
			msg=msg + "miercoles.";
			break;
		case 4:
			msg=msg + "jueves.";
			break;
		case 5:
			msg=msg + "viernes.";
			break;
		case 6:
			msg=msg + "sabado.";
			break;
		case 7:
			msg=msg + "domingo.";
			break;
		default:
			msg="El valor ingresado no es valido";
	}
    cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;
	
	cout << msg;
	
    return (0);
}
