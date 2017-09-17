#include <iostream>

using namespace std;

double fibo(int n){
	if( n == 1 || n == 2){
		return 1;
	}
	else {
		return fibo(n-1) + fibo(n-2);
	}
}

int main(){
	int lim = 0;
	cin>>lim;
	if(lim < 0){
		cout<<0<<endl;
		return 0;
	}
	/*for( int i = 2; fibo(i) < lim; i++){
		cout<<fibo(i)<<" ";
	}*/
	cout<<endl<<endl<<endl;
	for(int i = 2; fibo(i) < lim || fibo(i-1) < lim; i++){
		for(int e = fibo(i-1)+1; e < fibo(i); e++){
			if( e < lim){
				cout<<e<<" ";
			}
			else {
				break;
			}
		}
	}	
	cout<<endl;
	/*
	int * point = &lim;
	*point = 20;
	cout<<lim<<endl;*/
	return 0;
}
