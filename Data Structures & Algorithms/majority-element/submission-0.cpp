class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        int maxFrequency=INT_MIN;
        int maxElement=0;
        for(int num:nums)
        {
            mp[num]++;
            if(mp[num]>=maxFrequency) 
            {
                maxFrequency=mp[num];
                maxElement=num;
            }
        }
        return maxElement;
    }
};