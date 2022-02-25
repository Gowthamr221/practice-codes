#include<iostream>
using namespace std;

int main(){
 int i = 10;
 int j = 12;
 int const *p = &i;
 cout << p << endl;
 // the below line is valid becuse we declared *p as constant not p where p is the address and *p is the value in that address
 p = &j;
 cout << p << endl;
 // below line is declared are k is constant means address wont get changed
 int * const k = &i;
 cout << k << endl;
 // k = &j; this like throws an error becuase k is constant
 // the below line states that the pointer is constant and the data its pointing to is also constant
 int const * const p2 = &i;
 return 0;
}

