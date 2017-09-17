#include <iostream>

using namespace std;

int main(){
	int numeros[500],tot = 0;
	numeros[0] = 1;
	for(int i = 1; numeros[i-1] != 0; i++){
		cin>>numeros[i];
		tot += numeros[i];
	}
	cout<<tot<<endl;
}	
