//
//  main.cpp
//  BirthdayCake
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, max_Height = INT_MIN, candles = 0;
    cin>>n;
    int height[n];
    
    for(int i = 0; i < n; i++){
        cin>>height[i];
        
        if(height[i] >= max_Height){
            
            if(height[i] > max_Height){
                candles--;
            }
            
            max_Height = height[i];
            candles++;
        }
    }
    
    cout<<candles<<endl;
    
    return 0;
}
