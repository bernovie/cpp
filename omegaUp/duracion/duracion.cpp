#include <iostream>

using namespace std;

int main(){
	int start, end;
	cin>>start>>end;
	if(start < end){
		cout<<end - start;
	}
	else if(start == end){
		cout<<24;
	}
	else {
		cout<<24-start+end;
	}
	cout<<endl;
}
