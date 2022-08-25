// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long l = 1;
        long long r = ((long long)1 << 31) - 1;
        long long m = (r + l) / 2;
        int ans;
        while(l <= r)
        {
            m = (r + l) / 2;
            if(isBadVersion(m) == true)
            {
                r = m - 1;
                ans = m;
            }
            else
                l = m + 1;
        }
        return ans;        
    }
};