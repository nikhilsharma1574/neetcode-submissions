class Solution {
public:
    bool isPalindrome(string s)
    {
        int left = 0;
        int right = s.length() - 1;

        while(left < right)
        {
            if(s[left] != s[right])
                return false;

            left++;
            right--;
        }

        return true;
    }

    bool validPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left < right)
        {
            if(s[left] == s[right])
            {
                left++;
                right--;
            }
            else
            {
                string removeLeft = s;
                string removeRight = s;

                removeLeft.erase(left, 1);
                removeRight.erase(right, 1);

                return isPalindrome(removeLeft) ||
                       isPalindrome(removeRight);
            }
        }

        return true;
    }
};