#include<iostream>
#include<vector>
#include<string>
#include<stack>

using namespace std;

int main(){
    stack<string>storage;
    storage.push("hello");
    storage.push("world");
    cout<<storage.top()<< endl;
}