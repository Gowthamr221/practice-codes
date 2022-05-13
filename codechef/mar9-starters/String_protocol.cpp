#include<bits/stdc++.h>

using namespace std;



int main(){
    int testCases;
    cin >> testCases;
    while(testCases--){
        long long int size;
        cin >> size;
        string s;
        cin >>s;
        int i=0;
        int count = 0;
        while(i<size){
            if(s[i]==s[i+1]){
                count+=1;
                i+=2;
            }
            else{
                count++;
                i++;
            }
        }
        cout << count << endl;
    }
}