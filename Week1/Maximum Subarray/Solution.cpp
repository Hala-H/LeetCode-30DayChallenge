class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int current_max = INT_MIN;
        int max = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            max = max + nums[i];
            
            if(current_max < max)
                current_max = max;
            
            if (max < 0)
                max = 0;
        }
        return current_max;
    }
};
