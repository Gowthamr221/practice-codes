#include <iostream>
using namespace std;
//reference in c++
//below funciton is returning local variable in the form of reference
//bad practice
int& f(int n){
int a = n;
return a;
}
// bad practice
int* f2(){
  int i = 10;
  return &i;
}
int main(){
 int *p = f2();
 int i = 10;
 cout << p <<endl;
 // here the reference variale wont create any memory for itslef it just refers to the actual varialbe
 int &j = i;
 i++;
 cout << j <<endl;
 j++;
 cout << i <<endl; 
}
