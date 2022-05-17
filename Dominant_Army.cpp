#include<iostream>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    while(testcases--){
    int a,b,c;
    int flag = 0;
    cin >> a >> b >> c;
    if(a>b+c || b>a+c || c > a+b){
        flag = 1;
    }
    if(flag==1){
        cout <<"YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    }
}