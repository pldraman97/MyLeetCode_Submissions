class Solution {
public:
    bool isValid(string s) {
        bool ans = true;
        stack<char> a;
        for(auto i: s)
        {
            a.push(i);
            if(i == 'c')
            {
                a.pop();
                if(a.empty() != true && a.top() == 'b')
                    a.pop();
                else
                {
                    ans = false;
                    break;
                }
                if(a.empty() != true && a.top() == 'a')
                    a.pop();
                else
                {
                    ans = false;
                    break;
                }
            }
        }
        if(!a.empty())
            ans = false;
        return ans;
    }
};