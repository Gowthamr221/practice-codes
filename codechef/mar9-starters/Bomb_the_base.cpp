#include<bits/stdc++.h>
using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
int testcases;
cin >> testcases;
while(testcases--){
    long long int N,X;
    cin >> N >> X;
    int count = 0;
    long long int *arr = new long long int[N];
    for(long long int i=0;i<N;i++){
        cin >> arr[i];
    }
    for(long long int i=N-1;i>=0;i--){
        if(X>arr[i]){
           count=i+1;
           break;
        }
    }
    cout << count << endl;
}

}