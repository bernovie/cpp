//
//  main.cpp
//  BetweenSetsEditorial
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>

#define forn(i,n) for(int i=0; i<int(n);++i)

const int maxc = 100;

using namespace std;

int gcd(int a, int b){
    if(a < b) swap(a, b);
    
    if(a%b == 0 ){
        return b;
    }
    else{
        return gcd(b, a%b);
    }
    return 0;
}

int lcm(int a, int b){
    if(a || b) return abs(a*b)/gcd(a,b);
    return 0;
}

int main(int argc, const char * argv[]) {
    int amountA, amountB;
    cin>>amountA>>amountB;
    
    vector<int> A(amountA), B(amountB);
    
    forn(i, amountA){
        cin>>A[i];
    }
    
    forn(i, amountB){
        cin>>B[i];
    }
    
    int GCD = B[0];
    for(int i=1; i<amountB; i++){
        GCD = gcd(GCD,B[i]);
    }
    
    int LCM = A[0];
    for(int i=1; i<amountA; i++){
        LCM = lcm(LCM,A[i]);
        if(LCM > maxc){
            cout<<"0"<<endl;
            return 0;
        }
    }
    
    if(GCD%LCM != 0){
        cout<<"0"<<endl;
        return 0;
    }
    
    GCD /= LCM;
    int res = 0;
    
    for(int i=1; i*i <= GCD; ++i){
        if(GCD%i == 0){
            ++res;
            if(i*i != GCD) ++res;
        }
    }
    cout<<res;
    cout<<endl;
    return 0;
}
