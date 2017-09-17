#include <iostream>

using namespace std;

int main(){
    char word[40];
    for(int i = 0; word[i-1] != '\n';i++){
        cin.get(word[i]);
    }
    for(int i = 0; word[i] != '\n';i++){
        cout<<word[i]<<endl;
    }
}
