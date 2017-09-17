#include <iostream>

using namespace std;

int main(){
	int max = 0;
	cin>>max;
	int cals[max];
	for(int i = 0; i < max; i++){
		cin>>cals[i];
	}	

	for(int i = 0; i < max; i++){
		for(int e = i; e < max; e++){
			if(cals[i] < cals[e]){
				int temp = cals[i];
				cals[i] = cals[e];
				cals[e] = temp;
			}
		}	
	}
	for(int i = 0; i < max; i++){
		cout<<cals[i]<<" ";
	}
	cout<<endl;
}
