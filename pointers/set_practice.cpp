#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string> s;
    s.insert("hello");
    s.insert("world");
    auto it = s.find("hello");
    cout <<(*it) <<endl;
}