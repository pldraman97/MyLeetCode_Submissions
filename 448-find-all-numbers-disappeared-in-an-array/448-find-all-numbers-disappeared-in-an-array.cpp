class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<bool> present(nums.size() + 1, false);
        vector<int> result;
        for(int i = 0; i < nums.size(); i++)
        {
            present[nums[i]] = true;
        }
        for(int i = 1; i <= nums.size(); i++)
        {
            if(!present[i])
                result.push_back(i);
        }
        return result;
    }
};