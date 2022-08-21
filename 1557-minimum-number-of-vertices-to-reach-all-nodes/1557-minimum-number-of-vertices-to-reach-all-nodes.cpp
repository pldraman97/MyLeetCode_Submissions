class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<bool> visited(n, false);
        set<int> result;
        for(int i = 0; i < edges.size(); i++)
        {
            if(visited[edges[i][0]] == false)
                result.insert(edges[i][0]);
            visited[edges[i][0]] = true;
            if(result.find(edges[i][1]) != result.end())
                result.erase(edges[i][1]);
            visited[edges[i][1]] = true;
        }
        vector<int> ar;
        for(int i = 0; i < n; i++)
        {
            if(result.find(i) != result.end() || visited[i] == false)
                ar.push_back(i);
        }
        return ar;
    }
};