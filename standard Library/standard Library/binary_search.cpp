//
//  binary_search.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
int cmp(const void *ap, const void *bp){
    const int *a = (int *) ap;
    const int *b = (int *) bp;
    
    if(*a < *b){
        return -1;
    }else if (*a > *b){
        return 1;
    }else{
        return 0;
    }
}
bool cmp2(const int a, const int b){
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    if(a < b){
        return true;
    }else {
        return false;
    }
}

int main7(){
    const int ARRAY_SIZE = 8;
    int arr[ARRAY_SIZE] = {1,2,3,4,5,6,7,8};
    
    int key1 = 4;
    int* p1 = (int *) bsearch(&key1, arr, ARRAY_SIZE, sizeof(arr[0]), cmp);
    
  
    if(p1){
        cout<<"value "<<key1<<" found at position "<<(p1-&arr[0])<<endl;
    }
    cout<<p1<<endl;
    cout<<arr<<endl;
    cout<<(p1-arr)<<endl;
    
    vector<int> v = {1,2,3,4,5,6,7,8};
    
    bool binary = binary_search(v.begin(),v.end(), 4, cmp2);
    
    if(binary) cout<<4<<" was found"<<endl;
    return 0;
}
