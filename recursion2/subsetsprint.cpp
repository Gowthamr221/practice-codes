#include<bits/stdc++.h>

using namespace std;

void printSubsets(vector<int>&arr,vector<int>&subset,vector<vector<int>>&ans,int index){
    ans.push_back(subset);
    for(int i=index;i<arr.size();i++){
        subset.push_back(arr[i]);
        printSubsets(arr,subset,ans,i+1);
        subset.pop_back();
    }
    return;
}

int main(){
    vector<int> arr = {1,2,3};
    vector<int>subset;
    vector<vector<int>>ans;
    int index = 0;
    printSubsets(arr,subset,ans,index);
    // subsetsUtil(arr,ans,subset,index);
       for (int i = 0; i < ans.size(); i++) {
        for (int j = 0; j < ans[i].size(); j++)
            cout << ans[i][j] << " ";
        cout << endl;
    }
}