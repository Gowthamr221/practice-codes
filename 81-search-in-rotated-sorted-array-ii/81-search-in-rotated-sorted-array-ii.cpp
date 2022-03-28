class Solution {
public:
    bool search(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        bool result = binary_search(nums.begin(),nums.end(),target);
        return result;
    }
};