class Solution {
public:
    bool isAnagram(string s, string t) {
       map<char,int> sm,tm;
       for(char ch:s)
       {
        sm[ch]++;
       }
       for(char ch:t)
       {
        tm[ch]++;
       }
       return(sm==tm);
    }
};