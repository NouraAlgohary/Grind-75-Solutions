class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0, right = s.size() - 1;

        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while(left < right)
        {

            if(left < right && (s[left]<'a' || s[left] > 'z') && (s[left] < '0' || s[left] > '9'))
            {
                left++;
                continue;
            }
            if(left < right && (s[right]<'a' || s[right] > 'z') && (s[right] < '0' || s[right] > '9'))
            {
                right--;
                continue;
            }
            if(s[left]!=s[right])
                return false;

            left++;
            right--;
        }
        
        return true;
    }
};