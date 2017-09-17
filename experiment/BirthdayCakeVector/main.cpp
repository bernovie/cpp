//
//  main.cpp
//  BirthdayCakeVector
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    int n, max_height;
    cin>>n;
    vector<int> heights(n);
    
    for(int i = 0; i < n; i++){
        cin>>heights[i];
    }
    
    return 0;
}
