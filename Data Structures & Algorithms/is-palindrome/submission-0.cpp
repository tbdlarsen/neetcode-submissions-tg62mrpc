class Solution {
public:

    
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.size()-1;

        while (left <= right){
            char l_char = tolower(s[left]);
            char r_char = tolower(s[right]);
            if(!isalnum(l_char)){
                left++;
                continue;
            }
            if(!isalnum(r_char)){
                right--;
                continue;
            }

           
            if (l_char != r_char) return false;
            
            left++;
            right--;
        }
        return true;
        
    }
};
