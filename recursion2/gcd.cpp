#include<iostream>
using namespace std;

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }
    if(a==b){
        return a;
    }
    if(a>b){
        return gcd(a-b,b);
    }
    return gcd(a,b-a);
}

int eucledianGcd(int a,int b){
    return b==0 ? a : gcd(b,a%b);
}

int main(){
    int a,b;
    a=98;
    b=56;
    cout << "The gcd is" << endl;
    cout << eucledianGcd(a,b) << endl;
}