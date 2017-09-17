//
//  main.cpp
//  Introduction_To_Algorithm_Design
//
//  Created by Bernardo Oviedo on 4/9/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
void insertion_sort(T arr[], int n){
    int j;
    
    for(int i=1; i<n; i++){
        j=i;
        while((j>0)&&(arr[j]<arr[j-1])){
            swap(arr[j], arr[j-1]);
            j--;
        }
        
    }
}

void insertion_sort(string &arr, int n){
    int j;
    
    for(int i=1; i<n; i++){
        j=i;
        while((j>0)&&(arr[j])<arr[j-1]){
            swap(arr[j], arr[j-1]);
            j--;
        }
    }
}
int main(int argc, const char * argv[]) {
    int array[10] = {2,4,1,8,5,6,3,9,7,0};
    char letters[13] = {'i','n','s','e','r','t','i','o','n','s','o','r','t'};
    string words = "insertionsort";
    vector<int> arr = {2,4,1,8,5,6,3,9,7,0};
    
    cout<<"Words: "<<words.substr(0, 1)<<endl;
    
    if(words.substr(0,2) == "in"){
        cout<<"Great"<<endl;
    }
    insertion_sort(words, 13);
    
    for(int i = 0; i < 13; i++){
        cout<<words[i]<<" ";
    }
    cout<<endl;
    return 0;
}
