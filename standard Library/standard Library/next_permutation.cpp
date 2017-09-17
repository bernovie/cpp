//
//  next_permutation.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main5(){
    string s = "abba";
    sort(s.begin(), s.end());
    do{
        cout<<s<<endl;
    }while(next_permutation(s.begin(), s.end()));
    
    return 0;
}
