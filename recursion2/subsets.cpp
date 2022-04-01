#include<bits/stdc++.h>
using namespace std;

void findSubsets(int index,vector<int>arr,vector<int>&storage,vector<vector<int>>&ans){
	ans.push_back(storage);
	for(int i = index;i<arr.size();i++){
		storage.push_back(arr[i]);
		findSubsets(i+1,arr,storage,ans);
		storage.pop_back();
	}
	return;
}

int main(){
	vector<int>arr = {1,2,3};
	vector<vector<int>>ans;
	int index = 0;
	vector<int>storage;
	findSubsets(index,arr,storage,ans);
	
	
	for(auto it : ans){
		for (int it1 : it){
			cout << it1 << " ";
		}
		cout << endl;
	}
}