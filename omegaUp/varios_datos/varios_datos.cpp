#include <iostream>

using namespace std;

int main(){
	int max;
	cin>>max;
	int sum[max];
	for(int i = 0; i < max; i++){
		int a= 0,b= 0;
		cin>>a>>b;
		sum[i] = a+b;
	}
	for(int i = 0; i < max; i++){
		cout<<sum[i]<<endl;
	}
}
