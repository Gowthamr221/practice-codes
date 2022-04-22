class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // solving using sliding window technique
        int sol = 0;
        
        int size = s.size();
        for(int i=0;i<size;i++){
            vector<bool>visited(256,0);
            for(int j = i;j<size;j++){
                if(visited[s[j]]==true){
                    break;
                }
                else{
                    sol = max(sol , j-i+1);
                    visited[s[j]]=true;
                }
            }
            visited[s[i]]=false;
        }
        return sol;
    }
};