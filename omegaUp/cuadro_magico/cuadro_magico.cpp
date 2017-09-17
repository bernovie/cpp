R#include <iostream>

using namespace std;

int main(){
	int cuadro[3][3];
	int const magic = 120;
	int sum = 0;
	for(int y = 0; y < 3; y++){
		for(int x = 0; x < 3; x++){
			cin>>cuadro[y][x];
		}
	}

	for(int y = 0; y < 3; y++){
		sum = 0;
		for(int x = 0; x < 3; x++){
			sum += cuadro[y][x];			
		}
		if(sum != 15){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	
	for(int y = 0; y < 3; y++){
		sum = 0;
		for(int x = 0; x < 3; x++){
			sum += cuadro[x][y];			
		}
		if(sum != 15){
			cout<<"NO"<<endl;
			return 0;
		}
	}
		
	sum = 0;	
	for(int y = 0; y < 3; y++){
		for(int x = y; x < y+1; x++){
			sum += cuadro[y][x];			
		}
	}

	if(sum != 15){
		cout<<"NO"<<endl;
		return 0;
	}		
	
	sum = 0;
	for(int y = 0; y < 3; y++){
		for(int x = 2-y; x >= 2-y; x--){
			sum += cuadro[y][x];			
		}
	}
	
	if(sum != 15){
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"SI"<<endl;
}
