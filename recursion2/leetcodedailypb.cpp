#include<bits/stdc++.h>
using namespace std;
int main(){
    map <int,int,greater<int>> k;
    
    k.insert(pair<int,int>(1,2));
    k.insert(pair<int,int>(5,1));
    k.insert(pair<int,int>(9,2));
    for(auto it : k){
        cout << it.first<< " " << it.second << endl;
    }

}