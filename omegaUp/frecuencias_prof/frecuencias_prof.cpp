#include <iostream>

using namespace std;

int main(){
	int profs, alumns;
	cin>>profs>>alumns;
	int encuesta[alumns+1], tots[profs+1];
	for(int i = 1; i <= alumns; i++){
		cin>>encuesta[i];
	}
	for(int i = 1; i <= profs+1;i++){
		tots[i] = 0;
	}	
	for(int i = 1; i <= alumns; i++){
		tots[encuesta[i]]++;
	}
	for(int i = 1; i <= profs; i++){
		cout<<i<<"-"<<tots[i]<<endl;
	}
}
