#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
    int testcases;
    cin >> testcases;
    vector<string>answer_array;
    while (testcases--)
    {
        string temp1;
        string temp2="";
        cin >> temp1;
        if(temp1.size()>10){
            answer_array.push_back(temp1[0]+to_string(temp1.size()-2)+temp1[temp1.size()-1]);
        }
        else{
           answer_array.push_back(temp1);
        }
    }
    for(auto it: answer_array){
        cout << it << endl;
    }
    
}