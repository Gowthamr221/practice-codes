#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void solve(string &s,vector<char>&ds,int index){
    if(index == s.size()){
        for( auto it : ds){
            cout << it << " ";
        }
        cout << endl;
        return;
    }
    solve(s,ds,index+1);
    ds.push_back(s[index]);
    solve(s,ds,index+1);
    ds.pop_back();
    

}

int main(){
 string s;
 cin >> s; 
 vector <char> ds;
 solve(s,ds,0);
 return 0;
}

