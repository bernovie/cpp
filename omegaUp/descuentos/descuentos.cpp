#include <iostream>

using namespace std;

int main(){
	int cantidad;
	cin>>cantidad;
	if(cantidad > 1000){
		cout<<(double)cantidad*0.85;
	}
	else{
		cout<<cantidad;
	}
	cout<<endl;	
}
