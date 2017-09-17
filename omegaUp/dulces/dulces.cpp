#include <iostream>

using namespace std;

int main(){
	double lim = 0;
	int total = 0;
	cin>>lim;
	int nums[int(lim*2)];
	for(int i = 0; i < lim*2; i += 2){
		cin>>nums[i]>>nums[i+1];
	}	
	for(int i = 0; i < lim*2; i += 2){
		total += nums[i] * nums[i+1];
	}
	cout<<total<<endl;
	return 0;
}
