class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int temp = 0;
        int count = 0;
        int n = nums.size();

        for(int i = 0; i < n; i++) //removes zeros from between numbers
        {
            if(nums[i] != 0) // keep count of non-zero elements
                nums[count++] = nums[i]; // put current num in nums using count as index
        }
        for(int i = count; i < n; i++) // put the zeros in the end
        {
            nums[i] = 0;
        }
    } // end function
};
