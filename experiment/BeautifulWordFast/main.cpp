//
//  main.cpp
//  BeautifulWord
//
//  Created by Bernardo Oviedo on 4/11/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool isInCharSet(const char& letter, vector<char> set){
    sort(set.begin(), set.end());
   
    if(letter == set[0]) return true;
    
    for(int j = int(set.size()/2); j>0; j=int(set.size()/2)){
        
        if(letter < set[j]){
            set.erase(find(set.begin(), set.end(), set[j]), set.end());
        }
        else if(letter > set[j]){
            set.erase(set.begin(), find(set.begin(), set.end(), set[j]));
        }
        else{
            return true;
        }
        set.shrink_to_fit();
    }
    
    return false;
}

bool isBeautiful(const string& word){
    vector<char> vowels = {'a','e','i','o','u','y'};
    
    for(int i=0; i < word.size()-1; i++){
        if(word[i] == word[i+1]) return false;
        if(isInCharSet(word[i], vowels)){
            if(isInCharSet(word[i+1], vowels)){
                return false;
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
