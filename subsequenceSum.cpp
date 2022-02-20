#include<bits/stdc++.h>

using namespace std;
//remember to take reference variable 
int sumk(int ind,int s,int sum,int arr[],int n){
	if(ind == n){
		// condition satisfied
		if(s == sum){
			
			return 1;
		}
		//condition not satisified
		return 0;
	}


	s += arr[ind];
	int l = sumk(ind+1,s,sum,arr,n);
	s -= arr[ind];
	
	int r = sumk(ind+1,s,sum,arr,n);
	
	return l+r;
}

int main(){
	int arr[] = {1,2,1};
	int n = 3;
	int sum = 2;
	vector<int>ds;
	cout << sumk(0,0,sum,arr,n);
	return 0;
}