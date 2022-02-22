#include<iostream>
using namespace std;

void print(int*p){
 cout << *p << endl;
}

void incrementPointer(int*p){
   p = p + 1;
   cout << "p inside funciton"<<endl;
   cout << p <<endl;
}

void increment(int *p){
  (*p)++; 
}

int main(){
  int i = 10;
  int *p = &i;
  //print(p);
  //cout << p << endl;
 // incrementPointer(p);
  increment(p);
  cout << *p << endl;
}
