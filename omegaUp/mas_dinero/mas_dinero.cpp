#include <iostream>

using namespace std;

int main(){
	int juan[3], pedro[2];
	cin>>juan[0]>>juan[1]>>juan[2];
	cin>>pedro[0]>>pedro[1];
	int juanT = juan[0] + juan[1] + juan[2];
	int pedroT = pedro[0] + pedro[1];
	
	if(juanT > pedroT){
		cout<<"Juan";	
	}	
	else {
		cout<<"Pedro";
	}
	cout<<endl;
}
