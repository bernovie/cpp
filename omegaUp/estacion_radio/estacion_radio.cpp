#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int actual, dif = 0, pos = 0;
	cin>>actual;
	int estaciones[] = {580, 980, 1190, 1250, 1420};
	int min = abs(actual - estaciones[0]);
	if(actual >= 540 && actual <= 1520){
		for(int i = 1; i < 5; i++){
			dif = abs(actual - estaciones[i]);
			if(dif <= min){
				pos = i;
				min = dif;
			}
		}
		if(actual < estaciones[pos]){
			cout<<"adelante "<<min;
		}
		else {
			cout<<"atras "<<min;
		}
	}
	else {
		cout<<"error";
	}	
	cout<<endl;
	return 0;
}
