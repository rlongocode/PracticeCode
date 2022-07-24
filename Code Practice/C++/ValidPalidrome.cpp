class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size() -1;
        
 
        if(s.empty())
            return false;
        
        while(left < right){
            
            while(!isalnum(s[left]) && left < right )
                left++;
            while(!isalnum(s[right]) && left < right)
                right--;

            if(tolower(s[left]) != tolower(s[right]))
                return false;
            
            left++;
            right--;
        }
        
        return true;
    }
};