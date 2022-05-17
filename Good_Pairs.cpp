#include<iostream>
#include<vector>
#include<map>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;

int main(){

    int testCases;
    cin >> testCases;
    while(testCases--){
        int size;
        long long int answer=0;
        cin >> size;
        vector<int>a(size,0);
        vector<int>b(size,0);
        forn(i,size){
            cin >> a[i];
        }
        forn(i,size){
            cin>> b[i];
        }
        map<pair<int,int>,int> solve;

        for(int i=0;i<size;i++){
            answer+=solve[{a[i],b[i]}];
            solve[{b[i],a[i]}]+=1;
        }

        cout << answer << endl;
    }
}