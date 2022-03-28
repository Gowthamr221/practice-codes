class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int>nums2 = nums;
        sort(nums2.begin(),nums2.end());
        int counter =0;
        int left =0;
        int right = nums.size();
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=nums2[i]){
                
                break;
            }
            left++;
        }
         for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]!=nums2[i]){
                break;
            }
             right--;
        }
        if(right-left <=0){
            return 0;
        }
        return right-left;
    }
};