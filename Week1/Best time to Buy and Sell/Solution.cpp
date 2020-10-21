class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int res = 0;
        int max = 0;
        int min = -1;
        
        // This made my runitime 8ms, without it runtime was 13 ms (why? idk)
        // find minimum and maximum values in the array
        for(int i = 0; i < n; i++)
        {
            if (max < prices[i])
                max = prices[i];
            if (min > prices[i])
                min = prices[i];
        } 
        
        for(int i = 1; i < n; i++)
        {
            if(prices[i] > prices[i - 1])
                res += prices[i] - prices[i - 1]; 
        }
        return res;
    }
};
