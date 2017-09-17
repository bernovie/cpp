#include <iostream>

using namespace std;

int main(){
	int filas,cols;
	cin>>filas>>cols;
	int matriz[filas][cols];
	for(int y = 0; y < filas; y++){
		for(int x = 0; x < cols; x++){
			cin>>matriz[y][x];	
		}
	}
	for(int y = filas-1; y >= 0; y--){
		for(int x = 0; x < cols; x++){
			cout<<matriz[y][x]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
