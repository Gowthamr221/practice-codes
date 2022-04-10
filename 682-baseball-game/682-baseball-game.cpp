class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int>stk;
        int value1;
        int value2;
        for(string i : ops){
            if(i=="C"){
                stk.pop();
            }
            else if(i=="D"){
                stk.push(stk.top()*2);
            }
            else if(i=="+"){
                value1 = stk.top();
                stk.pop();
                value2 = stk.top();
                stk.push(value1);
                stk.push(value1+value2);
            }
            else{
                stk.push(stoi(i));
            }
            
        }
        int sum=0;
        while(stk.size()!=0){
            sum+=stk.top();
            stk.pop();
        }
        return sum;
    }
};