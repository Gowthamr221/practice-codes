#include<bits/stdc++.h>

using namespace std;

int main(){
    int i=10;
    cout << &i << endl;
    int *p = &i;
    cout << p << endl;
    cout << *p <<endl; // dereference operator
    float f = 10.2;
    float * pf = &f;
    cout << pf << endl;
}