class Solution {
public:
    vector<bool> canEat(vector<int>& candiesCount, vector<vector<int>>& queries) {
        vector<long long> prefix(candiesCount.size());
        prefix[0] = candiesCount[0];
        for(int i = 1; i < candiesCount.size(); i++)
        {
            prefix[i] = prefix[i - 1] + candiesCount[i];
        }
        vector<bool> result;
        for(auto i: queries)
        {
            bool ans = true;
            if(prefix[i[0]] < i[1] + 1)
                ans = false;
            if(prefix[i[0]] - candiesCount[i[0]] >= (i[1] + (long long)1) * i[2])
                ans = false;
            result.push_back(ans);
        }
        return result;
    }
};