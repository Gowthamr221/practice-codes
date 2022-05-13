#include<iostream>
using namespace std;

// find if a number is perfect square using binary search

bool solve (int l,int r,int value){
    if(r>=l){
    int mid = l+(r-l)/2;
    if(mid*mid == value){
        return true;
    }
    if(mid*mid > value){
        return solve(l,mid-1,value);
    }
    if(mid*mid < value){
        return solve(mid+1,r,value);
    }
    }
    return false;
}

int main(){
 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int x = 25;
    bool solution  = solve(0,25,x);
    cout << solution << endl;
 return 0;
}

