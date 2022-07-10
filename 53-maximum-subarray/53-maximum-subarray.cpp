class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int m = nums[0];
        int cur = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            cur += nums[i];
            m = max(m, cur);
            if(cur < 0)
                cur = 0;
        }
        return m;
    }
};