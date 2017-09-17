//
//  main.cpp
//  AppleOrange
//
//  Created by Bernardo Oviedo on 4/10/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>

using namespace std;

bool insideHouse(int distance, int origin, int min, int max){
    int totalDistance = origin + distance;
    
    if(totalDistance >= min && totalDistance <= max){
        return true;
    }
    
    return false;
}

int main(int argc, const char * argv[]) {
    int s,t,appleTreePos,orangeTreePos,numberApples,numberOranges;
    int applesInside=0, orangesInside=0;
    cin>>s>>t;
    cin>>appleTreePos>>orangeTreePos;
    cin>>numberApples>>numberOranges;
    
    int appleDistance[numberApples], orangeDistance[numberOranges];
    
    for(int i=0; i<numberApples; i++){
        cin>>appleDistance[i];
        if(insideHouse(appleDistance[i], appleTreePos,s,t)) applesInside++;
    }
    
    for(int i=0; i<numberOranges; i++){
        cin>>orangeDistance[i];
        if(insideHouse(orangeDistance[i], orangeTreePos,s,t)) orangesInside++;
    }
    
    cout<<applesInside<<endl<<orangesInside<<endl;
    
    return 0;
}
