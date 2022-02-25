#include<iostream>

using namespace std;

int main(){
  int i = 10;
  int const &k = i;
  i++;
  cout << k <<endl;
}
