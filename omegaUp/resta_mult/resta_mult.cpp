#include <iostream>

using namespace std;

int main(){
	int nums[4];
	cin>>nums[0]>>nums[1]>>nums[2]>>nums[3];
	cout<<(nums[0] - nums[1]) * (nums[2] - nums[3])<<endl; 
	return 0;
}
