#include <iostream>
#include <stdlib.h>

using namespace std;
#include <math.h>

int main(int argc, char* argv[]){ 
    float meters= atoi(argv[1]);
    cout<<meters*3.28084<<endl; 
    do{
    cout<<"How many Meters?: ";
    cin>>meters;
    cout<<meters*3.28084<<endl;
    cout<<"____________________"<<endl;
    }while(meters>=0);
}
