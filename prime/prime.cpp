#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long num = 0;
	do{
	cout<<"Enter a number to check if prime: ";
	cin>>num;
	if(num!=2&&num!=3&&num!=5&&num!=0){
		if(num%2==0 || num%3==0 || num%5==0){
			cout<<"Not Prime"<<endl;
		}
		else{
			cout<<"PRIME"<<endl;
		}
	}
	else{
		cout<<"PRIME"<<endl;
	}
	}while(num>=0);
	return 0;
}
