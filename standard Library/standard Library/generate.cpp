//
//  generate.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include "generate.hpp"

using namespace std;

ostream &operator<<(ostream &ostr, vector<int> v){
    for(auto i: v){
        cout<<i<<" ";
    }
    return ostr;
}

int main3(){
    vector<int> v(5);
    generate(v.begin(), v.end(), rand);
    cout<<"V: "<<v<<endl;
    
    int n = 0;
    generate(v.begin(), v.end(), [&n]{return n++;});
    cout<<"V: "<<v<<endl;
    n = 0;
    generate(v.begin(), v.end(), [&n, &v]{return v[n]*n++;});
    cout<<"V: "<<v<<endl;

    
    return 0;
}
