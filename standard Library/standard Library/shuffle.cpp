//
//  shuffle.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <vector>
#include <random>


using namespace std;

int main4(){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    random_device rd;
    mt19937 g(rd());
    
    shuffle(v.begin(), v.end(), g);
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));
    cout<<"\n";
    return 0;
}
