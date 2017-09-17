#include <iostream>

using namespace std;

int main(){
	int cals[5],tot = 0;
	for(int i = 0; i < 5; i++){
		cin>>cals[i];
		tot += cals[i];
	}
	cout<<tot/5<<endl;
	return 0;
}
