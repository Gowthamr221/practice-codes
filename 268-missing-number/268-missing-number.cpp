class Solution {
public:
    int missingNumber(vector<int>& nums) {
       
        int n = nums.size()+1;
        int formula = (n*(n-1))/2;
        
        int count =0;
        for(int i=0;i<nums.size();i++)
        {
            count += nums[i];
        }
        
        return formula - count;
    }
};