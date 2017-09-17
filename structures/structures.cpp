#include <iostream>
#include <array>
#include <string>

using namespace std;

struct Employee{
	char name[50];
	int age;
	float salary;
	
	int size (){
		return 3;
	}
};

class bike {
	public:
	double length, height, radius;

	bike(){
		length = 10;
		height = 7;
		radius = 5;
	}

	bike(double len, double heigh, double rad): length(len), height(heigh), radius(rad){};
	
	virtual ~bike(){
		cout<<"Bike is being deleted"<<endl;
	}	

	double getLength(){
		return length;
	}

	double getHeight(){
		return height;
	}
	
	double getRadius(){
		return radius;
	}

	void setRadius(double rad) {
		radius = rad;
	};

	virtual double getSpeed(){
		return 0;
	}
};

class mountainBike : public bike {
	public:
	double wheelFriction, wheelHarshness;

	mountainBike(): bike(30,20,12), wheelFriction(3.4), wheelHarshness(5.7){ }
		
	double getWheelFriction(){
		return wheelFriction;
	}

	double getHarshness(){
		return wheelHarshness;
	}

	double getSpeed(){
		return wheelFriction*radius;
	}

	virtual ~mountainBike(){
		cout<<"MountainBike destructor"<<endl;
	}
};

class racingBike : public bike {
	public:
	double wheelWheight;

	racingBike(): bike(10,20,30), wheelWheight(5.6){}

	double getWheelWeight(){
		return wheelWheight;
	}

	double getSpeed(){
		return wheelWheight*bike::radius;
	}

	virtual ~racingBike(){
		cout<<"Racing Bike destructor"<<endl;
	}
};

int main(){
	Employee george;
	bike *bike1 = new bike();	
	mountainBike *mbike1 = new mountainBike();
	racingBike *rbike1 = new racingBike();
	mbike1->setRadius(25);
	bike1 = mbike1;
	
	array<int,10> a;
	cout<<a.size()<<endl;
	cout<<"mbike1 wheelFriction: "<<mbike1->getRadius()<<endl;
	cout<<"mbike1 Speed: "<<bike1->getSpeed()<<endl;
	delete mbike1;
	bike1 = rbike1;
	cout<<"rbike1 Speed: "<<bike1->getSpeed()<<endl;
	delete rbike1;
	cout<<"Enter the employee's name: ";
	cin.get(george.name, 50);
	cout<<"Enter the employee's age: ";
	cin>>george.age;
	cout<<"Enter the employee's salary: ";
	cin>>george.salary;
	cout<<"---------------------------------"<<endl;
	cout<<"The results are the following: "<<endl;
	cout<<"Employee's name: "<<george.name<<endl;
	cout<<"Employee's age: "<<george.age<<endl;
	cout<<"Employee's salary: "<<george.salary<<endl;
	cout<<"Employee's size: "<<george.size()<<endl;
}


