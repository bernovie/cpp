#include <iostream>

using namespace std;

int main(){
	int cometa = 1, grupo = 1;
	char nombreC[73], nombreG[73];
	for(int i = 0; nombreC[i-1] != '\n'; i++){
		cin.get(nombreC[i]);
		//cout<<(int)nombreC[i]-64<<" ";
		if(nombreC[i] != '\n'){
			cometa *= ((int)nombreC[i]-64);
		}
	}

	for(int i = 0; nombreG[i-1] != '\n'; i++){
		cin.get(nombreG[i]);
		if(nombreG[i] != '\n'){
			grupo *= ((int)nombreG[i]-64);
		}
	}
	//cout<<cometa%47<<" "<<grupo%47<<endl;
	if(grupo%47 == cometa%47){
		cout<<"GO";
	}
	else {
		cout<<"STAY";
	}
	cout<<endl;
	return 0;
}
