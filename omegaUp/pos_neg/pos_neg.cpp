#include <iostream>

using namespace std;

int main(){
	int num = 0;
	cin>>num;
	if(num > 0){
		cout<<"POSITIVO";
	}
	else if(num < 0){
		cout<<"NEGATIVO";
	}
	else{
		cout<<"CERO";
	}
	cout<<endl;
}	
