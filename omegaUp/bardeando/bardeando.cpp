#include <iostream>

using namespace std;

int main(){
    int p = 0, total = 0, n = 0;
    cin>>p>>n;
    int numeros[n];
    
    for(int i = 0; i < n; i++){
        cin>>numeros[i];
        total += numeros[i];
    }
    if(total < p){
        cout<<p-total;
    }
    else {
        cout<<0;
    }
    cout<<endl;
    return 0;
}
