#include <iostream>
#define sizeofArray(a) (sizeof(a) / sizeof(a[0]))

int sizeofThis(int a[]){
	int lim = 0;
	for(int i = 0; a[i] != 0; i++){
		lim = i;
	}
	return lim;
}

int sizeofThis(char a[]){
	int lim = 0;
	for(int i = 0; a[i] != '\n'; i++){
		lim = i;
	}
	return lim+1;
}

using namespace std;

int main(){
	char word[100];
	int test[100] = {1,2,3,4,5};
	int l = 0;
	for(int i = 0; word[i-1] != '\n'; i++){
		word[i] = cin.get();
		l = i;
	}
	for(int i = l; i >= 0; i--){
		cout<<word[i];
	}
	cout<<endl<<sizeofThis(test)<<endl<<sizeofThis(word)<<endl;
	return 0;
}
