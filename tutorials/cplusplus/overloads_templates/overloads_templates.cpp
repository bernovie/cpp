#include <iostream>

using namespace std;

template <class Sometype>
Sometype sum(Sometype a, Sometype b){
	Sometype r;
	r = a+b;
	return r;
}

int main(){
	int x;
	x = sum<int>(5,10);
	cout<<x<<endl;
	return 0;
}
