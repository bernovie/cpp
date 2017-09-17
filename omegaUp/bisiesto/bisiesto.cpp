#include <iostream>

using namespace std;

int main(){
    int anio = 0;
    cin>>anio;
    if(anio % 100 != 0){
        if(anio % 4 == 0){
            cout<<"S";
        }
        else{
            cout<<"N";
        }
    }
    else {
        if(anio % 400 == 0){
            cout<<"S";
        }
        else {
            cout<<"N";
        }
    }
    cout<<endl;
}
