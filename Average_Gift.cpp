#include<iostream>
#include<limits.h>
#include<vector>
#define ll long long int
#define forn(i,n)  for(ll i=0;i<n;i++)
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
        int size,target;
        cin >> size >> target;
        vector<int>arr(size,0);
        int min_val = INT_MAX;
        int max_val = INT_MIN;
        forn(i,size){
            cin >> arr[i];
            min_val = min(arr[i],min_val);
            max_val = max(arr[i],max_val);
        }
        if( target >= min_val && target<=max_val ){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
        
    }
}