//Desarrollar un programa que calcule el factorial de un numero usando un ciclo
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int a=1;
	int facto;
	float acu=1;
	string msg;
	stringstream ss;
	
	cout << "Ingrese un valor para calcular su factorial: ";
	cin >> facto;
	while(a<=facto){
		acu=acu*a;
		ss.str("");
		ss << a;
		msg=msg+ss.str();
		if (a<facto){
			msg=msg+"*";
		}
		a++;
	}
	cout << msg << " = " << acu;
	return(0);
}
