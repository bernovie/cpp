#include <iostream>

using namespace std;

int main(){
	int cals[5];
	double total = 0;
	for(int i = 0; i < 5; i++){
		cin>>cals[i];
		total += cals[i];
	}
	printf("%.1f\n",total/5);
	return 0;
}
