#include<iostream>
using namespace std;

int fibonacci(int a){
  if(a<=1){
  return a;
  }
  return fibonacci(a-1)+fibonacci(a-2);
}

int main(){
 cout << "insert a value to find fibonacci : " << endl;
 int n;
 cin >> n; 
 cout << fibonacci(n) << endl;
 return 0;
}

