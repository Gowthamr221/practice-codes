#include<bits/stdc++.h>

using namespace std;

int main(){
    int i = 10;
    int * p = &i;
    cout << *p <<endl;
    i++;
    cout << *p<<endl;
    (*p)++;
    cout << i <<endl;
    cout << *p <<endl;
}