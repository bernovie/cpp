#include <iostream>

using namespace std;
class imagNumber{
	public:
	int i;
	int r;
	public:
   	void setReal(int r1){
		r = r1;
	}
	void setImag(int imag){
		i = imag;
	}
	imagNumber add(int real, int imag){
		imagNumber result;
		result.setImag(imag+i);
		result.setReal(real+r);
		return result;
	}
	void display(){
		cout<<r<<" + "<<i<<"i"<<endl;
	}
};

int main(int argc, const char *argv[])
{
	imagNumber x;
	x.i = -10;
	x.r = 5;
	cout<<x.i<<endl<<x.r<<endl;
	imagNumber x2;
	x2.i = 5;
	x2.r = 34;
	(x.add(x2.r,x2.i)).display();	
	return 0;
}
