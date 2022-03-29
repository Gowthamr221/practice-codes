#include<iostream>

using namespace std;

int main(){

    int nums[] = {3,1,2,3};
    int slow = nums[0];
    int fast = nums[0];

    do{
        slow = nums[slow];
        fast = nums[nums[fast]];
    }while(fast!=slow);
    fast = nums[0];
    while(slow!=fast){
        slow=nums[slow];
        fast=nums[fast];
    }
    cout << slow <<endl;

}