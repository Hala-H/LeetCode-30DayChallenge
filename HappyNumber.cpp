//Anas

class Solution {
public:
    bool isHappy(int n) {
        int count = 0;
        int temp = n;
        int sum = 0;

        unordered_set<int> seen;
        while(n != 1)
        {
            sum = 0;
            while(temp != 0)
            {
                temp /= 10;
                count++;
            }
            int digits[count];
            for(int i = 0; i < count; i++)
            {
                digits[i] = n % 10; 
                n /= 10;
            }
            for(int j = 0; j < count; j++)
            {
                sum += digits[j]*digits[j]; 
            }
            if(seen.count(sum) > 0)
                return false;
            else
                seen.insert(sum);
            
            temp = sum;
            n = sum;
        }
        return true;   
    }
};