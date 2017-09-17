//
//  main.cpp
//  standard Library
//
//  Created by Bernardo Oviedo on 2/25/17.
//  Copyright © 2017 Bernardo Oviedo. All rights reserved.
//

#include <iostream>
#include <list>

using namespace std;

ostream &operator<<(ostream &ostr, const list<int> &list1){
    
    for(auto i: list1){
        ostr<<i<<" ";
    }
    
    return ostr;
}
class Bike{
    
    public:
    double length, width, height;
    
    Bike():length(10), width(15), height(7){}
    
    Bike(double a, double b, double c):length(a), width(b), height(c){}
    
    //Get Methods
    double getLength(){
        return length;
    }
    
    double getWidth(){
        return width;
    }

    double getHeight(){
        return height;
    }
    
    template <class _Pred> void multiply(_Pred __pred);
    
};

class mountainBike: Bike{
    public:
    double wheelFriction;
    
    mountainBike(): wheelFriction(3.4){}
    
    mountainBike(double f): wheelFriction(f){}
    
    double getFriction(){
        return wheelFriction;
    }
    
};

template <class _Pred>
void Bike::multiply(_Pred __pred) {
    width *= __pred;
}

int main1(int argc, const char * argv[]) {
    list<int> list1 = {5,8,2,9,10};
    list<int>(list2);
    list2 = {2,5,1,9,4,8,7};
    
    cout<<"List1 before sorting: "<<list1<<endl;
    cout<<"List2 before sorting: "<<list2<<endl;

    list1.sort();
    list2.sort();
    
    cout<<"List1 after sorting: "<<list1<<endl;
    cout<<"List2 after sorting: "<<list2<<endl;

    list1.erase(list1.begin());
    
    cout<<"List1 after sorting: "<<list1<<endl;
    
    cout<<list1.front()<<endl;
    
    list1.erase(list1.begin());
    cout<<"List1 after sorting: "<<list1<<endl;
    
    cout<<list1.front()<<endl;
   
    list1.merge(move(list2));
    
    cout<<"List1 after merging: "<<list1<<endl;
    cout<<"List2 after move: "<<list2<<endl;
    list1.unique();
    cout<<"List1 after unique values: "<<list1<<endl;
    
    Bike *bike = new Bike(5,4,3);
    
    cout<<"Bike measurements: "<<bike->length<<" "<<bike->width<<" "<<bike->height<<endl;
    bike->multiply(5);
    cout<<"Bike width after multiply: "<<bike->width<<endl;
    
    return 0;
}
