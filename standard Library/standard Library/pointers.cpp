//
//  pointers.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main6(){
    /*int* p;
    int array[8] = {1,2,3,4,5,6,7,8};
    
    p = array;
    cout<<p<<endl<<endl;
    cout<<p<<endl<<endl;
    
    for(int i = 0; i < 8; i++){
        cout<<(*p+i)<<endl;
    }*/
    
    int n = 5;
    int* np = &n;
    int* npp = np;
    
    cout<<"n: "<<&n<<endl;
    cout<<"np: "<<&np<<endl;
    cout<<"npp: "<<*npp<<endl;
    
    int a[2];
    int (*ap)[2] = &a;
    
    struct S {int n;};
    
    S s ={1};
    int* sp = &s.n;
    
    return 0;
}
