#include <iostream>
#include <string>

using namespace std;

int vector[2][5];

int main() {
	for(int i=0;i<2;i++){
		for (int j=0;j<5;j++){
			cout << "Ingrese valor de fila " << i << " columna " << j << " : ";
			cin >> vector[i][j];
		}
	}
	for(int i=0;i<2;i++){
		cout << i << endl;
		for (int j=0;j<5;j++){
			cout << vector[i][j] << " " ;
		}
		cout << endl;
	}
}

