class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_len=INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            int sum=0;
            for(int j=i;j<nums.size();j++)
            {
                sum+=nums[j];
                if(sum>=target)
                {
                    min_len=min(min_len,j-i+1);
                }
            }
        }
        return (min_len == INT_MAX) ? 0 : min_len;
    }
};