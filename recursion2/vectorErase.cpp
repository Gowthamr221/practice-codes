#include<bits/stdc++.h>

using namespace std;

int main(){
    vector <int> arr = {1,2,3};
    // arr.erase(arr.begin()+1);
    // for(auto it : arr){
    //     cout << it << endl;
    // }
   sort(arr.begin(),arr.end(),greater<int>());
   for(auto it : arr){
       cout << it << endl;
   }
}