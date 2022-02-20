#include<bits/stdc++.h>

using namespace std;
void curse(int ind,vector<int>&ds,int arr[],int n){
    if(ind == n){
        for (auto it : ds){
            cout<<it<<" ";
        }
        if(ds.size()==0){
            cout << "{}";
        }
        cout << endl;
        return;
    }

    // not take condition 
    curse(ind+1,ds,arr,n);
    // take or pick condtion
    ds.push_back(arr[ind]);
    curse(ind+1,ds,arr,n);
    ds.pop_back();
    
}


int main(){
    int arr[] ={3,1,2}; 
    int n = 3;
    vector<int>ds;
    curse(0,ds,arr,n);
}
