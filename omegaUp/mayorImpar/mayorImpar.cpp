#include <iostream>
#include <limits.h>

using namespace std;

int main(int argc, const char *argv[])
{
	int input[5];
	int mayor = INT_MIN;

	for (int i = 0; i < 5; i++) {
		cin>>input[i];
		if(abs(input[i] % 2) == 1){
			if(input[i] > mayor){
				mayor = input[i];
			}
		}
	}
	cout<<endl;
	if(mayor == INT_MIN){
		
	}
	else {
		cout<<mayor<<endl;
	}
	return 0;
}
