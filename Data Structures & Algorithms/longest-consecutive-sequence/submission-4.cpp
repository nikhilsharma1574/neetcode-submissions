class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(!nums.size()) return 0;
        sort(nums.begin(),nums.end());
        int max_len = 1;
        int current_max_len = 1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1] == nums[i])
            {
                continue;
            }
            if(nums[i]+1==nums[i+1])
            {
                current_max_len++;
            }
            else
            {
                current_max_len = 1;
            }
            max_len = max(max_len, current_max_len);
        }
        return max_len;
    }
};
