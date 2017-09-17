#include <iostream>

using namespace std;

int recursion(int prev, int actual,int a, int b,int tot){
	if(prev == a && actual == b){
		cout<<endl;
		return tot;
	}
	else {
		tot++;
		int temp = 0;	
		temp = prev;
		prev = actual;
		actual = (actual + temp)%10;
		cout<<actual<<" ";
		return recursion(prev,actual,a,b,tot);
	}
}
int main(){
	int a,b,temp1,temp2,temp3 = 0;
	int cont = 1;
	cin>>a>>b;
	/*temp1 = b;
	cout<<a<<" "<<b<<" ";
	for(temp2 = a+b;temp1 != a || temp2 != b;temp2 = (temp2 + temp3)%10){
		temp3 = temp1;
		temp1 = temp2;
		cout<<temp2<<" ";
		cont++;
	}
	if(a == 0 && b == 0){
		cont = 0;
	}
	cout<<temp2<<endl<<cont;*/
	cout<<a<<" "<<b<<" "<<(a+b)%10<<" ";
	cout<<recursion(b,(a+b)%10,a,b,1);
	cout<<endl;

}
