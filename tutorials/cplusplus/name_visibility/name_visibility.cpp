#include <iostream>

using namespace std;

namespace foo{
	int value(){ return 5; }
}

namespace bar{
	const double pi=3.1416;
	double value(){ return 2*pi; }
}

namespace first{
	int x = 10;
	int y = 50;
}

namespace second{
	double x = 3.1416;
	double y = 2.7183;
}

void line(){
	cout<<"-------------------------"<<endl;
}

int main(){
	int x = 10;
	int y = 20;
	{
		int x;
		x = 50;
		y = 50;
		cout<<"Inner Block:"<<endl;
		cout<<"x: "<<x<<endl;
		cout<<"y: "<<y<<endl;
	}
	cout<<"Outer Block:"<<endl;
	cout<<"x: "<<x<<endl;
	cout<<"y: "<<y<<endl;	
	line();

	cout<<foo::value()<<endl;
	cout<<bar::value()<<endl;
	cout<<bar::pi<<endl;
	line();

	using namespace first;
	cout<<x<<endl;
	cout<<y<<endl;
	{
		using second::x;
		cout<<x<<endl;
		cout<<second::y<<endl;
	}
	line();

	return 0;
}
