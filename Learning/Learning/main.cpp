//
//  main.cpp
//  Learning
//
//  Created by Bernardo Oviedo on 4/11/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

#define myConst 5

using namespace std;

template <class T>
class Stack{
    private:
        vector<T> elements;
    
    public:
        void push(T const &);
        void pop();
        T top();
        bool empty();
};

template <class T>
void Stack<T>::push(T const &elem){
    elements.push_back(elem);
}

template <class T>
void Stack<T>::pop(){
    if(elements.empty()){
        throw out_of_range("Stack<>::pop(): empty stack");
    }else{
        elements.pop_back();
    }
}

template <class T>
T Stack<T>::top(){
    if(elements.empty()){
        throw out_of_range("Stack<>::top(): empty stack");
    }
    return elements.back();
}

template <class T>
bool Stack<T>::empty(){
    return elements.empty();
}

int main(int argc, const char * argv[]) {
    vector<int> test = {1,2,3,5};
    //cout<<myConst<<endl;
    int *A = new int(5);
    
    try {
        Stack<int> intStack;
        Stack<string> stringStack;
        
        intStack.push(*A);
        cout<<intStack.top()<<endl;
        
        stringStack.push("Hello");
        cout<<stringStack.top()<<endl;
        
        stringStack.pop();
        intStack.pop();
        
    } catch (exception const &ex) {
        cerr<<"Exception: "<<ex.what()<<endl;
        return -1;
    }
    cout<<endl;
    return 0;
}
