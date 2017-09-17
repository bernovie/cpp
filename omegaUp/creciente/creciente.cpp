#include <iostream>

using namespace std;

int main(){	
	int lim = 0;
	cin>>lim;
	int nums[lim];
	for(int i = 0; i < lim; i++){
		cin>>nums[i];
	}
	for(int i = 0; i < lim; i++){
		for(int e = i+1; e < lim; e++){
			if(nums[i] > nums[e]){
				cout<<"NO"<<endl;
				return 0;
			}
		}
	}
	cout<<"SI"<<endl;
	return 0 ;
}
