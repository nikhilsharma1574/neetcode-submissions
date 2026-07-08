class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int left=0,ans=0;
        unordered_set<char> hs;
        for(int right=0;right<s.length();right++)
        {
            while(hs.count(s[right]))
            {
                hs.erase(s[left]);
                left++;
            }
            hs.insert(s[right]);
            ans=max(ans,right-left+1);
        }
        return ans;
    }
};
