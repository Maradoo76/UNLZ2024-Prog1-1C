#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char c;
    string msg;
    int a;

    system("CLS");
    cout << "Identificar vocal" << std::endl;
    cout << "-----------------" << std::endl << std::endl;
    cout << "Ingrese un caracter: ";
    cin >> c;
    
    msg="El caracter ingresado ";
    a=(int)toupper(c);
    cout << a;
    switch (a) {
    	case 65:
    		msg=msg+"es una vocal.";
    		break;
    	case 69:
    		msg=msg+"es una vocal.";
    		break;
    	case 73:
    		msg=msg+"es una vocal.";
    		break;
    	case 79:
    		msg=msg+"es una vocal.";
    		break;
    	case 85:
    		msg=msg+"es una vocal.";
    		break;
    	default:
    		msg=msg+"no es una vocal.";
	}
	
	cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;
	
	cout << msg;
	
    return (0);
}

