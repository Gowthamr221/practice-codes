#include<iostream>
using namespace std;

int main(){
   int testCases;
   cin >> testCases;
   while(testCases--){
    long long int X;
    long long int Y;
    cin >> X >> Y;
    if(X>=Y){
        cout << 0 << endl;
    }
    else{
        if(Y%X!=0){
            cout << Y/X << endl;
        }
        else{
            cout << Y/X - 1 << endl;
        }
    }
   }
}