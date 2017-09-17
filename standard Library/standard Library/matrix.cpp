//
//  matrix.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

ostream &operator<<(ostream &ostr, int array[]){
    
    for(int i = 0; i < sizeof(array)/sizeof(array[0]); i++){
        cout<<array[i]<<" ";
    }
    
        return ostr;
}

int main(){
    int array[5] = {1,2,3,4,5};
    
    int matrix[5][5] = {{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25}};
    
   
    cout<<"--------------------------------"<<endl;

    for(int column = 0; column < (sizeof(matrix)/sizeof(matrix[0])); column++){
        for(int row = 0; row < (sizeof(matrix[0])/sizeof(matrix[0][0])); row++){
            cout<<matrix[column][row]<<" ";
        }
        cout<<endl;
    }
    
    int matrix3D[5][5][5];
    int contador = 0;
    
    for(int layer = 0; layer < 5; layer++){
        for (int column = 0; column < 5; column++) {
            for(int row = 0; row < 5; row++){
                matrix3D[layer][column][row] = contador++;
            }
        }
    }
    cout<<"---------------------------"<<endl;
    for(int layer = 0; layer < 5; layer++){
        for (int column = 0; column < 5; column++) {
            for(int row = 0; row < 5; row++){
                cout<<matrix3D[layer][column][row]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}
