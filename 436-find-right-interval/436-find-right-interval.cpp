class Solution {
public:
    int Search(vector<pair<int,int>>& start, int end)
    {
        int l = 0;
        int r = start.size() - 1;
        int m;
        int ans = -1;
        while(l <= r)
        {   
            m = l + (r - l) / 2;
            if(start[m].first == end)
                return start[m].second;
            else
            {
                if(start[m].first > end)
                {
                    ans = start[m].second;
                    r = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
        }
        return ans;
    }
    vector<int> findRightInterval(vector<vector<int>>& intervals) {
        vector< pair<int,int> > start(intervals.size());
        vector<int> result(intervals.size());
        for(int i = 0; i < intervals.size(); i++)
            start[i] = {intervals[i][0], i};
        sort(start.begin(), start.end());
        for(int i = 0; i < start.size(); i++)
            result[i] = Search(start, intervals[i][1]);
        return result;
    }
};