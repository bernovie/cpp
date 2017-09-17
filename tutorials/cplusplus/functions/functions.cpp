#include <iostream>
#include <string>

using namespace std;

int addition(int a, int b){
	int r;
	r=a+b;
	return r;
}

void welcome(string name){
	cout<<"Welcome "+name<<endl;
}

void duplicate(int &a, int &b, int &c){
	a *= 2;
	b *= 2;
	c *= 2;
}

int divide(int a, int b=2){
	int r;
	r=a/b;
	return r;
}

long factorial(long n){
	if(n > 1){
		return n*factorial(n-1);
	}
	else{
		return 1;
	}
}

int main(){
	int x=1, y=2, z=3;
	cout<<addition(5,3)<<endl;
	welcome("Berny");
	duplicate(x,y,z);
	cout<<x<<" "<<y<<" "<<z<<" "<<endl;
	cout<<divide(12)<<endl;
	cout<<divide(20,4)<<endl;
	cout<<factorial(5)<<endl;
	return 0;
}
