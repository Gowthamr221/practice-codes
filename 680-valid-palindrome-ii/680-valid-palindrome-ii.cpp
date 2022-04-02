class Solution {
private:
    bool palindromeCheck(string s,int i,int j){
    int left = i;
    int right = j;
    while(left<=right){
        
        if(s[left]!=s[right]){
            return false;
        }   
        left++;
        right--;
        
    
    }
    return true;
}
public:
    bool validPalindrome(string s) {
        int stringSize = s.size();
        int left = 0;
        int right = stringSize-1;
        while(left<=right){
          
               
            if(s[left]!=s[right]){
                return (palindromeCheck(s,left+1,right) || palindromeCheck(s,left,right-1));
            }
            left++;
            right--;
            
        }
        return true;
    }
};