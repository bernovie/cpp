//
//  main.cpp
//  Kangaroo
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

struct Kangaroo{
    int x, vel;
    
    void step(){
        x += vel;
    }
    
    void test();
};

bool commonMultiple(Kangaroo kangaroo1, Kangaroo kangaroo2){
    
    if((kangaroo2.vel >= kangaroo1.vel)){
        return false;
    }
    
    if((kangaroo1.vel != kangaroo2.vel) && (kangaroo2.x-kangaroo1.x)%(kangaroo1.vel-kangaroo2.vel) == 0){
        return true;
    }
    return false;
}

int main(int argc, const char * argv[]) {
    Kangaroo kangaroo1, kangaroo2;
    
    cin>>kangaroo1.x>>kangaroo1.vel>>kangaroo2.x>>kangaroo2.vel;
    if(commonMultiple(kangaroo1, kangaroo2)){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
    
    return 0;
}
