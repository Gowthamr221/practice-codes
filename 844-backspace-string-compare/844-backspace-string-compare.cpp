class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>s1;
        stack<char>s2;
        int sizeOfS = s.size();
        int sizeOfT = t.size();
        for(int i=0;i<sizeOfS;i++){
            if(s[i]=='#'){
                if(!s1.empty()){
                    s1.pop();
                }
            }
            else{
                s1.push(s[i]);
            }
        }
        for(int i=0;i<sizeOfT;i++){
            if(t[i]=='#'){
                if(!s2.empty()){
                    s2.pop();
                }
            }
            else{
                s2.push(t[i]);
            }
        }
        return s1==s2;
    }
};