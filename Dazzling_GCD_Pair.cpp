#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}
int main(){
    int testCases;
    cin >> testCases;
    while (testCases--)
    {
        int a;
        int b;
        int flag = 0;
        cin >> a >> b;
        int curr_best_a=a;
        int curr_best_b=b;
        for(int i=a;i<b;i++){
            for(int j=i+1;j<=b;j++){
                if(gcd(i,j)>1){
                    flag=1;
                    if(i+j<=curr_best_a+curr_best_b){
                        curr_best_a = i;
                        curr_best_b = j;
                    }
            }
        }
        }
        if(flag==0){
            cout << -1 << endl;
        }else{
            cout << curr_best_a << " " << curr_best_b;
        }
        
    }
    
    
}
