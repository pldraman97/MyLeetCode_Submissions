class Solution {
public:
    string reverseWords(string s) {
        int i = s.size() - 1;
        stack<char> st;
        string ans;
        int j = 0;
        while(s[j] == ' ')
        {
            j++;
        }
        for(;i  >= j; i--)
        {
            if(s[i] == ' ')
            {
                int sz = st.size();
                while(!st.empty())
                {
                    ans.push_back(st.top());
                    st.pop();
                }
                if(sz)
                    ans.push_back(' ');
            }
            else
                st.push(s[i]);
        }
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
};