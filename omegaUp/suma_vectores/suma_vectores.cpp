#include <iostream>

using namespace std;

int main(){
	int size;
	cin>>size;
	int vec1[size],vec2[size],vec3[size];
	for(int i = 0; i < size; i++){
		cin>>vec1[i];
	}
	for(int i = 0; i < size; i++){
		cin>>vec2[i];
		vec3[i] = vec1[i]+vec2[i];
		cout<<vec3[i]<<" ";
	}
	cout<<endl;
}
