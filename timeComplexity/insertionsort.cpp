#include<bits/stdc++.h>
using namespace std;

int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif

// insertion sort
	vector<int>arr = {8,4,1,5,9,2};

	for(int i = 1;i<arr.size();i++){
		int temp = arr[i];
		int j = i - 1;
		while(j>=0 && temp < arr[j]){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = temp;
	}

	for(auto it : arr){
		cout << it << " ";
	}
}