#include <iostream>

using namespace std;

int main(){
	int max;
	cin>>max;
	int numeros[max];
	
	for(int i = 0; i < max; i++){
		cin>>numeros[i];
	}
	
	/*for(int i = 0; i < max; i++){
		cout<<numeros[i];
	}*/
	
	for(int i = 0; i < max; i++){
		for(int e = 0; e < numeros[i]; e++){
			cout<<"<3";
		}
		cout<<endl;
	}
}
