#include<iostream>

using namespace std;

int main(){
    int testcases;
    int a,b,c;
    cin >> testcases;
    int counter = 0;
    while(testcases--){
        cin >> a>>b>>c;
        if(a+b+c>=2){
            counter++;
        }
    }
    cout << counter << endl;
}