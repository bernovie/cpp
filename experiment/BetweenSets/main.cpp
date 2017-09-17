//
//  main.cpp
//  BetweenSets
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

#define forn(i,n) for(int i=0; i<int(n);++i)

using namespace std;

bool isFactor(int number, int factor){
    if(number%factor == 0) return true;
    
    return false;
}

vector<int> betweenSets(vector<int> setA, vector<int> setB){
    vector<int> inSets;
    int minimum;
    
    sort(setA.begin(), setA.end());
    sort(setB.begin(), setB.end());
    
    minimum = *min_element(setB.begin(), setB.end());
    
    for(int i=1; i<=minimum; i++){
        int counter = 0;
        for(int e=0; e<setA.size();e++){
            if(isFactor(i, setA[e])){
                counter++;
            }
        }
        for(int e=0; e<setB.size();e++){
            if(isFactor(setB[e], i)){
                counter++;
            }
        }
        
        if(counter == setA.size()+setB.size()) inSets.push_back(i);
    }
    
    return inSets;
}

int main(int argc, const char * argv[]) {
    int amountA, amountB;
    
    vector<int> inSets;
    
    cin>>amountA>>amountB;
    
    vector<int> A(amountA), B(amountB);
    
    for (int i=0; i < amountA; i++) {
        cin>>A[i];
    }
    
    for (int i=0; i<amountB; i++) {
        cin>>B[i];
    }
    
    inSets = betweenSets(A, B);
    
    cout<<int(inSets.size())<<endl;

    //cout<<*(A+1)<<endl;
    return 0;
}
