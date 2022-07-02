class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        vector<int> count(26,0);
        for(int i = 0; i < chars.length(); i++)
            count[chars[i] - 'a']++;
        for(auto i: words)
        {   
            vector<int> check(26,0);
            for(int j = 0; j < i.length(); j++)
                check[i[j] - 'a']++;
            for(int j = 0; j < 26; j++)
            {
                if(count[j] < check[j])
                    break;
                if(j == 25)
                    ans += i.length();
            }
        }
        return ans;
    }
};