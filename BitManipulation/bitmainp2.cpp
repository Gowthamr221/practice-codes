#include<iostream>
#include<vector>
using namespace std;

int main(){
    // find 2 values that are different in array of pairs [2,1,2,5,1,4,4,7,3,3]
    vector<int>arr = {2,1,2,5,1,4,4,7,3,3};
    int arrSize = arr.size();
    int XOR_VAL = 0;
    // O(n) for finding the bit where it differs
    for(auto it:arr){
        XOR_VAL ^= it;
    }
    // find which bit is differing 
    // the below operation will take less than O(32)
    int counter=0;
    while(XOR_VAL){
        if(XOR_VAL&1){
            break;
        }
        counter++;
        XOR_VAL = XOR_VAL >> 1;
    }
    // O(n) to traverse all 
    int XOR1=0,XOR2=0;
    for(auto it: arr){
        if(it&(1<<counter)){
            XOR1^=it;
        }
        else{
            XOR2^=it;
        }
    }
    cout << XOR1 << " " << XOR2;
    // approx O(n) and space O(1)


    //Q2: given n integers print the xor of all subsets 
    arr = {1,3,2};
}