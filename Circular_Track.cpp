#include<iostream>
using namespace std;

int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        long long int A,B;
        long long int M;
        cin >> A >> B >> M;
        if(abs(B-A) <=M/2){
            cout <<abs(B-A) << endl;
        }
        else{
            cout << abs(M-abs(B-A)) << endl;
        }
    }
}