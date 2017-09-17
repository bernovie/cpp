//
//  main.cpp
//  BeautifulWord
//
//  Created by Bernardo Oviedo on 4/11/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

bool isBeautiful(const string& word){
    char vowels[6] = {'a','e','i','o','u','y'};
    
    for(int i=0; i < word.size()-1; i++){
        if(word[i] == word[i+1]) return false;
        for(int e=0; e < sizeof(vowels)/sizeof(vowels[0]);e++){
            if(word[i] == vowels[e]){
                for(int k=0; k < sizeof(vowels)/sizeof(vowels[0]); k++){
                    if(word[i+1] == vowels[k]) return false;
                }
            }
        }
    }
    
    return true;
}

int main(int argc, const char * argv[]) {
    string word;
    cin>>word;
    if(isBeautiful(word)){ cout<<"Yes";}
    else{ cout<<"No";}
    cout<<endl;
    return 0;
}
