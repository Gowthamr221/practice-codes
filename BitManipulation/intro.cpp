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
    cout << binaryToInt(converted_value) << endl;
    int a = 5;
    // left shift will multiply the value by x times multiplied by 2
    // right shift will divide the value by x times multiplied by 2
    cout << (a<<2)<<(a>>2) << endl;
    // int has 32 bits space it cant shift more than 31 times we get negative values 
    // Remember : after topling over the the total digits will be same and 0 will be placed on right or left side
    
    // ~ operator filps bits

    //Q1 given array of integers every integer occurs once but one integer occurs once
    int arr1[]={1,1,2,2,3,3,5};
    int xor_val = 0;
    for(auto it:arr1){
        xor_val=xor_val^it;
    }
    cout << "this is xor value"<< endl;
    cout << xor_val << endl;

    //Q2 swaping of 2 numbers using xor 
    int x = 5;
    int y = 7;
    x = x^y;
    y = x^y;
    x = x^y; 
    cout << x << y << endl;
    //Q3 given N print all the xor for all the numbers below (1 to N)
    int Limit = 5;
    xor_val = 0;
    for(int i=1;i<=Limit;i++){
        xor_val = xor_val ^ i;
    }
    
    cout << xor_val << endl;

    //Q4 given a range L to R print the XOR 
    // find xor(L-1) ^ xor(R)

    //Q5 find if a number is even or odd using bitwise operators
    cout << (bool)(3&1) << endl;
   
    //Q7 if ith bit is set or not 
     cout << (bool)( (13>>1) & 1 ) << endl;
     // how will i make mask use sleft shift on 1 mass = (1 << i)
     cout << (bool)((13)&(1<<1))<<endl;
     // here each i will put i no of zeroes on right side of 1 

    //Q8 extract the ith bit of a number

    //Q9 set the ith bit of a number
    // Q10 clear the ith bit
    // for both of the above questions use bit masking
    cout << (bool) (4&(~(1<<2))) << endl;
    //Q11 remove the last set bit 
    cout << (bool) (13&12) << endl;
    //Q12 check if a number is power of 2  
    // if n&n-1 == 0 then the number is purely a power of 2
    //Q13 count the no of set bits in a number
    int count =0;
    int num = 14;
    while(num!=0){
        if(num&1==1){
            count++;
        }
        num=num>>1;
    }
    cout <<  "count for set bits is :" << count << endl;
}   