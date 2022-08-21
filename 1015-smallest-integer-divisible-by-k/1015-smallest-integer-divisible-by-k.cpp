class Solution {
public:
    int smallestRepunitDivByK(int k) {
        int len = 0;
        long long num = 0;
        if(k % 2 == 0 || k % 5 == 0)
            return -1;
        while(num < k)
        {
            num *= 10;
            num++;
            len++;
        }
        while(num != 0)
        {
            num %= k;
            while(num < k && num != 0)
            {
                num *= 10;
                num++;
                len++;
            }
        }
        return len;
    }
};