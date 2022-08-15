#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    int A,B;
    while(testcases--){
        cin >> A >> B;

        if(A<B){
            while(A<B){
                A=A*2;
            }
        }
        else{
            while (B<A)
            {
                B=B*2;
            }
            
        }
        if(A==B){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}