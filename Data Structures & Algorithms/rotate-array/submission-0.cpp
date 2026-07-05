class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        while(k)
        {
            int last=nums.back();
            nums.pop_back();
            nums.insert(nums.begin(),last);
            k--;
        }
    }
};