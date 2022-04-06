class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int arrSize = arr.size(),mod=1e9+7,ans=0;
        unordered_map<int,int>m;
        for(int i=0;i<arrSize;i++){
            ans = (ans+m[target-arr[i]]) % mod;
            
            for(int j=0;j<i;j++){
                m[arr[i]+arr[j]]++;
            }
        }
        return ans;
    }
};