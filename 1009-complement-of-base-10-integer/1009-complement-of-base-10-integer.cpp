class Solution {
public:
    int bitwiseComplement(int n) {
        int ans = 0;
        if(n == 0)
            return 1;
        for(int i = 0; i < 31 && n >= (1 << i); i++)
        {
            if((n & (1 << i)) == 0)
              ans += (1 << i);
        }
        return ans;
    }
};