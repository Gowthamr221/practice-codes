#include<iostream>
using namespace std;

int factorial(int n){
  if(n==0){
    return 1;
  }
  return n* factorial(n-1);
}

int main(){
 int n;
 cout << "enter a value to find factorial: " << endl;
 
 cin >> n;
 int output = factorial(n);
 cout << "ans :"<<output << endl;
 return 0;
}

