// double pointers

#include<iostream>
using namespace std;
// below function wont work cus its not trying to change the address
void increment1(int**p){
  p = p + 1;
}
// below function will change the adress of the real middle pointer
void incrememet2(int** p){
  *p = *p + 1;
}
// the below function will change the actual value of the variable 
// since are are dereferencing the address
void increment3(int**p){
  **p = **p + 1;
}

int main(){
  int i=10;
  int * p = &i;
  int **p2=&p;
  cout << p2 <<endl;
  cout << &p <<endl; 
  cout << p<<endl;
  cout << *p2 <<endl;
  cout << &i <<endl;


}
