#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long kinds_flowers=0, number_petals=0, number_stock=0;
    cin>>kinds_flowers;
    unsigned long matrix[kinds_flowers][2];
    unsigned long max_flowers=0;
    for(int i=0; i<kinds_flowers;i++){
        number_petals=0;number_stock=0;
        cin>>number_petals>>number_stock;
        if(__gcd(number_petals,number_stock)>1&&number_stock>max_flowers){
            max_flowers=number_stock;
        }
    }
    cout<<max_flowers<<endl;
    return 0;
}

