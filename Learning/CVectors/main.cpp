//
//  main.cpp
//  CVectors
//
//  Created by Bernardo Oviedo on 4/11/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>

using namespace std;

class CVector{
public:
    int x,y;
    CVector(){};
    CVector(int a, int b) : x(a), y(b){};
    CVector operator + (const CVector&);
    int operator [] (const int& );
};

CVector CVector::operator+(const CVector& param){
    CVector temp;
    temp.x = x + param.x;
    temp.y = y + param.y;
    return temp;
}
int CVector::operator[](const int& index){
    if(index) return index<2 ? y:throw out_of_range("CVector::operator[]: index out of range");
    return x;
}

int main(int argc, const char * argv[]) {
    CVector A(1,3), B(4,7);
    CVector result;
    
    result = A+B;
    cout<<result.x<<" "<<result.y<<endl;
    cout<<A[0]<<" "<<A[1]<<endl;
    cout<<"----------------------"<<endl;
    
    int a = 5;
    int& b = a;
    int *c = &a;
    int* &d = c;
    
    cout<<a<<endl;
    b = 10;
    cout<<a<<endl;
    *c = 25;
    cout<<a<<endl;
    d = new int(5);
    cout<<*c<<endl;
    b = 30;
    cout<<a<<endl;
    return 0;
}
