#include <iostream>
#include <string>
using namespace std;

int main(){
	string name = "";
	cout<<"Enter your name: ";
	cin>>name;
	for(int i = 0; i < 10; i++){
		cout<<i<<" ";
	}
	cout<<endl;
	cout<<name<<endl;
	return 0;
}
