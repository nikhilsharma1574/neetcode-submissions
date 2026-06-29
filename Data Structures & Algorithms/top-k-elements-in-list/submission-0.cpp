class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(int num:nums)
        {
            mp[num]++;
        }
        priority_queue<pair<int,int>> pq;
        for(auto it:mp)
        {
            pq.push({ it.second, it.first });
        }
        vector<int> v;
        while(k--)
        {
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};