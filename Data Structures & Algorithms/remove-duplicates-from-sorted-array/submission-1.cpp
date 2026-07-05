class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(!nums.size()) return 0;
        int left=0;
        while(left<nums.size() && left+1<nums.size())
        {
            if(nums[left]==nums[left+1]) 
            {
                nums.erase(nums.begin()+left);
            }
            else
            {
                left++;
            }
        }
        return nums.size();
    }
};