class Solution {
public:
    int consecutiveNumbersSum(int n) {
        int ans = 0;
        for(long long i = 1; i <= n; i++)
        {
            if((2 * n - i * i + i) % (2 * i) == 0)
            {
                if((2 * n - i * i + i) / (2 * i) > 0)
                {
                    ans++;
                }
                else
                    break;
            }
            
        }
        return ans;
    }
};