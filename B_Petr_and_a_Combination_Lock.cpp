#include<iostream>
#include<vector>
using namespace std;
// this is also called as powerset we are finding all the possible sets of given array
int main(){
    int arrSize;
    cin >> arrSize;

    vector<int> arr(arrSize);
    for(int i=0;i<arrSize;i++){
        cin >> arr[i];
    }
    
    int totalSubsets = (1<<(int)arrSize);
    vector<vector<int>>ans;
    vector<int>storage;
    int sum=0;
    // iterating with O(2^n)
    for(int i=0;i<totalSubsets;i++){
        storage.clear();
        sum = 0;
        //iterating with O(n)
        for(int j=0;j<arrSize;j++){
            if(i&(1<<j)){
                storage.push_back(arr[j]);
                sum += arr[j];
            }
            else{
                storage.push_back(-1*arr[j]);
                sum+= -1*arr[j];
            }
            
        }
        if(sum==0 || sum%360==0){
           ans.push_back(storage);
        }
        
    }
    // here the total time complexity is O(2^n * n)
    // this algorithm is applicable only below n=20 beyond 20 we get overflow of 32 bit limit on bits then we get wrong answers it will give TLE
    // for(auto it : ans){
    //     for(auto it1:it){
    //         cout << it1 <<" ";
    //     }
    //     cout << endl;
    // }
    if(ans.size()==0){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }
}