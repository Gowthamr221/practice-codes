/*given array of N integers, Given Q queries and in each query given L and R
print the sum of array elements from index L to R (L and R included) )*/

#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+10;
int a[N];
int prefixSum[N];
int main(){
    int n;
    cin >> n;
    for(int i=1;i<=n;++i){
        cin >> a[i];
        prefixSum[i]=prefixSum[i-1]+a[i];
    }
    int q;
    cin >> q;
    while(q--){
        int l,r;
        cin >> l >> r;
        long long sum=0;
        // for(int i=l;i<=r;++i){
        //     sum+=a[i];
        // }
        cout << prefixSum[r]-prefixSum[l-1]<<endl;

       
    }
}