// find first value >= X

#include<bits/stdc++.h>
using namespace std;

int solve(int arr[],int l,int r,int ans,int target){
	while(l<=r){
		int mid = l+(r-l)/2;
		if(arr[mid] >= target){
			ans = mid; // saving the index
			r = mid-1;
		}
		else{
			l = mid+1;
		}
		
	}
	return ans;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif
int target = 7;//ans should be 8
int arr[] = {2,3,5,6,8,10,12}; 
int size = sizeof(arr)/sizeof(arr[0]);
int solution = solve(arr,0,size-1,-1,target);
cout << "the index is " << solution << endl;
cout << "the value is " << arr[solution] << endl;

}