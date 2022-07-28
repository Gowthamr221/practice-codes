class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>calcS(364,0);
        vector<int>calcT(364,0);
        
        for(int i =0;i<s.size();i++){
            calcS[s[i]]++;
        }
        for(int i=0;i<t.size();i++){
            calcT[t[i]]++;
        }
        return calcT==calcS;
    }
};