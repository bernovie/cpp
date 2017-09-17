#include <iostream>

using namespace std;
void mes(int m){
	switch(m){
		case 1:
			cout<<"Enero";
		break;
		case 2:
			cout<<"Febrero";
		break;
		case 3:
			cout<<"Marzo";
		break;
		case 4:
			cout<<"Abril";
		break;
		case 5:
			cout<<"Mayo";
		break;
		case 6:
			cout<<"Junio";
		break;
		case 7:
			cout<<"Julio";
		break;
		case 8:
			cout<<"Agosto";
		break;
		case 9:
			cout<<"Septiembre";
		break;
		case 10:
			cout<<"Octubre";
		break;
		case 11:
			cout<<"Noviembre";
		break;
		case 12:
			cout<<"Diciembre";
		break;
		default:
			cout<<"Error";
	}
	cout<<endl;
}

int main(){
	int max;
	cin>>max;
	int num[max];
	for(int i = 0; i < max; i++){
		cin>>num[i];
		mes(num[i]);
	}	
	return 0;
} 
