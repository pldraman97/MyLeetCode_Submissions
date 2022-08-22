class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int window = 0; 
        for(int i = 0; i < nums.size(); i++)
        {
            window += nums[i];
        }
        int cur = 0;
        for(int i = 0; i < window; i++)
            cur += nums[i];
        int ans = window - cur;
        for(int i = window; i < nums.size() + window; i++)
        {
            cur += nums[i % nums.size()] - nums[i - window];
            ans = min(ans, window - cur);
        }
        return ans;
    }
};