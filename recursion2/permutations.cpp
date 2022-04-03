#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int>arr={1,2,3};
    vector<int> dup = arr;
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
    next_permutation(arr.begin(),arr.end());
    while (arr!=dup)
    {
    for(auto it:arr){
        cout << it << " ";
    }
    cout << endl;
    next_permutation(arr.begin(),arr.end());
    }
}