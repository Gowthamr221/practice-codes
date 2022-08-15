#include<iostream>

using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    long int temp;
    while(testcases--){
        cin >> temp;
        if(temp > 100 && temp <=1000){
            temp=temp-25;
        }
        else if(temp > 1000 && temp <=5000){
            temp = temp - 100;
        }
        else if(temp > 5000){
            temp = temp - 500;
        }

        cout << temp << endl;
    }
}