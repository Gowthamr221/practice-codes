#include<bits/stdc++.h>

using namespace std;
//remember to take reference variable 
bool sumk(int ind,vector <int> &ds,int s,int sum,int arr[],int n){
	if(ind == n){
		// condition satisfied
		if(s == sum){
			for(auto it : ds) {
				cout << it << " ";
			}
			cout << endl;
			return true;
		}
		//condition not satisified
		return false;
	}

	ds.push_back(arr[ind]);
	s += arr[ind];
	if(sumk(ind+1,ds,s,sum,arr,n)==true){
		return true;
	}
	s -= arr[ind];
	ds.pop_back();
	if(sumk(ind+1,ds,s,sum,arr,n)==true){
		return true;
	}
	return false;
}

int main(){
	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	vector<int>ds;
	sumk(0,ds,0,sum,arr,n);
}