class Solution {
public:
    int numberOfSteps(int num) {
        long long int counter = 0;
        while(num>0){
            if(num%2==0){
                counter++;
                num = num/2;
            }
            else{
                counter++;
                num = num - 1;
            }
        }
        return counter;
    }
};