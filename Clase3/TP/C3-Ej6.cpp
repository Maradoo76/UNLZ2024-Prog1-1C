#include <iostream>
#include <sstream>
#include <stdlib.h> 

using namespace std;

int main()
{
    char c;
    string msg;
    float n1,n2,res;
	int a,e;
	
    system("CLS");
    cout << "Caculadora" << std::endl;
    cout << "----------" << std::endl << std::endl;
    cout << "Ingrese el primer numero: ";
    cin >> n1;
    cout << "Ingrese el segundo numero: ";
    cin >> n2;
    cout << "Ingrese el operador (+ - * /): ";
    cin >> c;
    
    msg="El resultado de ";
    a=(int)toupper(c);
    switch (a) {
    	case 43:
    		//suma
    		res=n1+n2;
    		//msg=msg+to_string(n1)+"+"+to_string(n2)+"="+to_string(res);
    		msg=msg+" sumar ";
    		break;
    	case 45:
    		//resta
    		res=n1-n2;
    		msg=msg+" restar ";
    		break;
    	case 42:
    		//multiplicacion
    		res=n1*n2;
    		msg=msg+" multiplicar ";
    		break;
    	case 47:
    		//Division
    		res=n1/n2;
    		msg=msg+" dividir ";
    		break;
    	default:
    		msg="No es posible realizar el calculo";
    		e=1;
	}
	
	cout << std::endl << "Resultados" << std::endl;
    cout << "----------" << std::endl << std::endl;
	
	if (e!=1){
		cout << msg << n1 << " y " << n2 << " es " << res;
	} else {
		cout << msg;
	}
	
    return (0);
}

