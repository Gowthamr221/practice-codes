#include<bits/stdc++.h>

using namespace std;

void printArr(vector<int>&arr){
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
}

int main(){
    vector<int>arr={1,2,3,4,5};
    
    do{
        printArr(arr);
    }
    while(next_permutation(arr.begin(),arr.end()));
}