#include <iostream>

using namespace std;

int main(){
	int cal = 0;
	cin>>cal;
	//cout<<endl;
	//cout<<"Salida"<<endl;
	switch(cal){
		case 10:
			cout<<"Excelente";
		break;
		case 9:
			cout<<"Muy bien";
		break;
		case 8:
			cout<<"Bien";
		break;
		case 7:
			cout<<"Regular";
		break;
		case 6:
			cout<<"Suficiente";
		break;
		default:
			cout<<"No acredita";
	}
	cout<<endl;
}
