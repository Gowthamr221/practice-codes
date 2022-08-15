#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        int x;
        cin >> x;
        int flag = 0;
        for(int i=1;i*i<=x;++i){
            if((x-2*i)%(i+2)==0 && x!=2*i){
                cout << "YES" << endl;
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            cout << "NO" << endl;
        }
        
    }
}