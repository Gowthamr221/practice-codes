#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int>data =  {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0};
    int arrSize = data.size();
    int count = 0;
    for(int i=0;i<arrSize;i++){
       if(data[i]!=0){
           data[count++]=data[i];
       }
    }
    while(count<arrSize){
        data[count]=0;
        count++;
    }
    for(auto it : data){
        cout << it << endl;
    }
}