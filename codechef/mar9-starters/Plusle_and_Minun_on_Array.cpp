#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        ll int size;
        cin >> size;
        vector<ll int>arr(size);
        for(ll int i=0;i<size;i++){
            cin >>arr[i];
            arr[i]=abs(arr[i]);
        }
        vector<ll int>A1;
        for(ll int i=0;i<size;i=i+2){
            A1.push_back(arr[i]);
        }
        
        vector<ll int>A2;
        for(ll int i=1;i<size;i=i+2){
            A2.push_back(arr[i]);
        }
        int minA1index = min_element(A1.begin(),A1.end())-A1.begin();    
        int maxA2index = max_element(A2.begin(),A2.end())-A2.begin();
        int temp = A2[maxA2index];
        A2[maxA2index]=A1[minA1index];
        A1[minA1index] =temp;
        int solution = accumulate(A1.begin(),A1.end(),0) - accumulate(A2.begin(),A2.end(),0);
        cout << solution <<  endl;
    }
    
}