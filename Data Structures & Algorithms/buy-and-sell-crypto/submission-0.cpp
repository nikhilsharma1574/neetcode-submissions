class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(!prices.size()) return 0;
        int left=0;
        int right=1;
        int max_diffrence=0;
        while(right<prices.size())
        {
            if(prices[right]>prices[left])
            {
                max_diffrence=max(max_diffrence,prices[right]-prices[left]);
            }
            else
            {
                left=right;
            }
            right++;

        }
        return max_diffrence;
    }
};
