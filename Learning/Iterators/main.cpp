//
//  main.cpp
//  Iterators
//
//  Created by Bernardo Oviedo on 4/11/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char * argv[]) {
    vector<int> A={1,2,3,4,5}, B={6,7,8,9,10};
    vector<int>::iterator myIter = A.begin();
    A.insert(myIter++, 25);
    
    
    for(; myIter != A.end(); myIter++){
        cout<<*myIter<<" ";
    }
    cout<<endl;
    
    return 0;
}
