#include<iostream>
#include<vector>
using namespace std;
// this is also called as powerset we are finding all the possible sets of given array
int main(){
    vector<int> arr = {1,2,3};
    int arrSize = arr.size();
    int totalSubsets = (1<<3);
    vector<vector<int>>ans;
    vector<int>storage;
    // iterating with O(2^n)
    for(int i=0;i<totalSubsets;i++){
        storage.clear();
        //iterating with O(n)
        for(int j=0;j<arrSize;j++){
            if(i&(1<<j)){
                storage.push_back(arr[j]);
            }
        }
        ans.push_back(storage);
    }
    // here the total time complexity is O(2^n * n)
    // this algorithm is applicable only below n=20 beyond 20 we get overflow of 32 bit limit on bits then we get wrong answers it will give TLE
    for(auto it : ans){
        for(auto it1:it){
            cout << it1 <<" ";
        }
        cout << endl;
    }
}