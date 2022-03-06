#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> neighbourSum(vector<vector<int>>&nums){
	int N = nums.size();
	int M = nums[0].size();
	vector<vector<int>>newArray(N,vector<int>(M,0));
	for(int i = 0; i < N;i++){
		for(int j = 0; j < M; j++){
			if(i-1>=0){
				newArray[i][j]+=nums[i-1][j];
			}
			if(j-1>=0){
				newArray[i][j]+=nums[i][j-1];
			}
			if(i+1<=N-1){
				newArray[i][j]+=nums[i+1][j];
			}
			if(j+1<=M-1){
				newArray[i][j]+=nums[i][j+1];
			}
		}
	}
	return newArray;
}

int main(){
   vector<vector<int>> nums = {
   	{1,2,3},
   	{4,5,6},
   	{7,8,9}
   };
   vector<vector<int>>ans = neighbourSum(nums);
   for(auto it : ans){
   	for (auto it2 : it){
   		cout << it2 << " ";
   	}
   	cout << endl;
   }
   return 0;
}