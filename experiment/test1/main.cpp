//
//  main.cpp
//  test1
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>

#define forn(e,n) for(int i=e; i < int(n);++i)

using namespace std;

template <typename T>
float myDistance(vector<T> A, vector<T> B, int n){
    if(A.size() != B.size()){
        cout<<"ERROR-Number of Dimensions is unequal"<<endl;
        return -1.0f;
    }
    if(n==1){
        return A[0]<B[0] ? B[0]-A[0]:A[0]-B[0];
    }
    else{
        return sqrt(pow((B[n-1]-A[n-1]),2) + pow(myDistance(A, B, (--n)),2));
    }
    return 0.0f;
}

int main(int argc, const char * argv[]) {
    vector<vector<int>> A(5), B(5);
    vector<int> *C;
    vector<int> *F;
    
    C = new vector<int>();
    F = new vector<int>();
    
    vector< vector<int> > D ={{1,2,3},{4,5,6}};
    vector<vector<int>*> *E;
    E = new vector< vector<int>* >(10);
    vector<vector<vector<int>>> Z(5);
    
    for(int y=0; y < Z.size();++y){
        Z[y].resize(5);
        for(int x=0; x<Z[y].size();++x){
            Z[y][x].resize(5);
            for(int z=0; z<Z[y][x].size();++z){
                Z[y][x][z] = z+x+y;
            }
        }
    }
    
    for(int y=0; y < Z.size();++y){
        Z[y].resize(5);
        for(int x=0; x<Z[y].size();++x){
            Z[y][x].resize(5);
            for(int z=0; z<Z[y][x].size();++z){
                Z[y][x][z] = z+x+y;
            }
        }
    }
    
    vector<double> point1 = {3,4,7,10,40};
    vector<double> point2 = {6,8,9,5,30};
    
    cout<<"Point Distance: "<<myDistance(point2, point1, int(point1.size()))<<endl;
    
    return 0;
}
