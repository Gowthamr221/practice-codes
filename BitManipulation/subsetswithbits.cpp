#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr = {1,2,3};
    int arrSize = arr.size();
    int totalSubsets = (1<<3);
    vector<vector<int>>ans;
    vector<int>storage;
    for(int i=0;i<totalSubsets;i++){
        storage.clear();
        for(int j=0;j<arrSize;j++){
            if(i&(1<<j)){
                storage.push_back(arr[j]);
            }
        }
        ans.push_back(storage);
    }

    for(auto it : ans){
        for(auto it1:it){
            cout << it1 <<" ";
        }
        cout << endl;
    }
}