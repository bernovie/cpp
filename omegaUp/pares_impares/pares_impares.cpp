#include <iostream>

using namespace std;

int main(){
	int max;
	cin>>max;
	int num[max];
	int pares = 0, impares  = 0;
	
	for(int i = 0; i < max; i++){
		cin>>num[i];
		if(num[i]%2 == 0){
			pares++;
		}
		else {
			impares++;
		}
	}
	cout<<pares<<" "<<impares<<endl;
}
