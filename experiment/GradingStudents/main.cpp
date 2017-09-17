//
//  main.cpp
//  GradingStudents
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>

using namespace std;

int round(int grade){
    int multiple5 = 0;
    
    if(grade >= 38){
        multiple5 = 5-grade%5;
        if(5-grade%5 < 3){
            return grade+multiple5;
        }
    }
    
    return grade;
}

int main(int argc, const char * argv[]) {
    int n;
    cin>>n;
    int grades[n];
    
    for(int i=0; i<n; i++){
        cin>>grades[i];
        grades[i] = round(grades[i]);
    }
    
    for(int i=0; i<n; i++){
        cout<<grades[i]<<endl;
    }
    
    return 0;
}
