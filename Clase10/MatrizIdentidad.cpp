#include <iostream>
#include <string>

using namespace std;

const int cant=19;
int vector[cant][cant];

int main() {
	for(int i=0;i<cant;i++){
		for (int j=0;j<cant;j++){
			if(i==j){
				vector[i][j]=i;
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

