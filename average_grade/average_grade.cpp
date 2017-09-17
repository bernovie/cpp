#include <iostream>
#include <math.h>
using namespace std;

int main(){
    char opt = ' ';
    int grade = 0;
    int total = 0,cont = 0;
    do{
        cout<<"Enter grade: ";
        cin>>grade;
        total += grade;
        cont++;
        cout<<"Do you want enter another grade?<Y/N>";
        cin>>opt;
        opt = tolower(opt); 
    }while(opt != 'n');
    cout<<"The total average is: ";
    cout<<((double)total)/((double)cont)<<endl;
    cout<<cos(360)<<endl;
    cout<<pow(10,10)<<endl;
    cout<<hypot(3,4)<<endl;
    cout<<fmax(3,8)<<endl;
    cout<<isgreater(10.0f,5.0f)<<endl; 
return 0;

}
