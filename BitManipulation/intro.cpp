#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int convertToBinary(int num){
    vector<int>sol;

    
    while(num>0){
      sol.push_back(num%2);
      num = num/2;  
    }
    int final_val = 0;
    int multiply = 1;
    for(auto it:sol){
        final_val = it*multiply+final_val;
        multiply = multiply*10;
    }

    return final_val;
}



int binaryToInt(int binary){
    int result=0;
    int count = 0;
    while(binary>0){
        if(binary%10==1){
            result = result+pow(2,count);
        }
        binary = binary/10;
        count++;
    }
    return result;
}

int main(){
    //every number can be represented in binary
    int value = 5;
    int converted_value = convertToBinary(5);
    cout << converted_value<<endl;
    cout << binaryToInt(converted_value);
    
}