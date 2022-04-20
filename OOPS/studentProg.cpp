#include "student.h"
#include<iostream>

using namespace std;

int main(){
   student s1;
   s1.rollNo = 5;
   s1.setStr("hello");
   student s2(s1);
   cout << s2.rollNo << endl;
   s2.getStr();
}