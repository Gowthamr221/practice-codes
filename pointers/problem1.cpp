#include<iostream>
using namespace std;

int main(){
int a = 10;
int *p = &a;
int **q = &p;
int b = (**q)++;
cout << b << endl;
cout << a <<endl;
}
