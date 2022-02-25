#include<iostream>
using namespace std;

bool is_sorted(int a[],int size){
 if (size == 0 || size == 1){
   return true;
 }
 if(a[0] > a[1]){
   return false;
 }
 return is_sorted(a+1,size-1);
}

int main(){
 int i[] = {1,2,3,4,5};
 bool ans = is_sorted(i,sizeof(i)/sizeof(i[0]));
 cout << ans << endl;
 return 0;
}

