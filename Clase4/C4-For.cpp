#include <iostream>
#include <string>
using namespace std;

int main()
{
		
	for (int a=2000;a<2025;a++){
		if ((a%4==0 and a%100!=0) or a%400==0) {
			cout << a << " es bisiesto" << endl;
		}
	} 
	
	return(0);
}
