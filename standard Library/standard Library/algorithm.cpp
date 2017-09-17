//
//  algorithm.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>
#include <memory>

using namespace std;

ostream &operator<<(ostream &ostr, const vector<int> &v1){
    for(auto i : v1){
        cout<<i<<" ";
    }

    return ostr;
}

int main2(int argc, const char * argv[]) {

    int n1 = 3;
    int n2 = 5;

    vector<int> v = {0,1,3,4};
    vector<int> v2 = {5,6,7,8};

    //v.insert(v.end(), 6);

    //v.assign(20, v.at(3));
    v[2] = 5;
    v.push_back(6);
    v.push_back(v[1]);
    //allocator<vector<int>> va = v.get_allocator();
    //printf("VA: %e \n",va);

    cout<<"V is: "<<v<<endl;

    auto result1 = find(v.begin(), v.end(), n1);
    auto result2 = find(begin(v), end(v), n2);
    vector<string> v;

    v.push_back("");
    
    if(result1 != end(v)){
        cout<<"v contains: "<<n1<<endl;
    }else{
        cout<<"v does not contain: "<<n1<<endl;
    }

    if(result2 != end(v)){
        cout<<"v contains: "<<n2<<endl;
    }else {
        cout<<"v does not contain "<<n2<<endl;
    }

    cout<<"Vector V is: "<<v<<endl;
    cout<<"Vector V2 is: "<<v2<<endl<<endl;
    v.swap(v2);

    cout<<"Vector V is: "<<v<<endl;
    cout<<"Vector V2 is: "<<v2<<endl;

    v.

    return 0;
}
