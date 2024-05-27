#include <iostream>
#include <string>

using namespace std;

const int cant=8;
int vector[cant][cant];

int main() {
	for(int i=0;i<cant;i++){
		for (int j=0;j<cant;j++){
			if(i+j==cant-1){
				vector[i][j]=1;
			} else {
				vector[i][j]=0;
			}
		}
	}
	for(int i=0;i<cant;i++){
		for (int j=0;j<cant;j++){
			cout << vector[i][j] << " " ;
		}
		cout << endl;
	}
}

