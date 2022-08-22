class Solution {
public:
    int getXORSum(vector<int>& arr1, vector<int>& arr2) {
        vector<int> a1(32,0), a2(32,0);
        int i, temp, j;
        for(i = 0; i < arr1.size(); i++)
        {
            temp = arr1[i];
            j = 31;
            while(temp)
            {
                a1[j--] += temp & 1;
                temp =  temp >> 1;
                
            }
            if(i < arr2.size())
            {
                temp = arr2[i];
                j = 31;
                while(temp)
                {
                    a2[j--] += temp & 1;
                    temp =  temp >> 1;
                }
            }
        }
        for(; i < arr2.size(); i++)
        {
            temp = arr2[i];
            j = 31;
            while(temp)
            {
                a2[j--] += temp & 1;
                temp =  temp >> 1;
            }
        }
        int ans = 0;
        for(int i = 0; i < 32; i++)
        {
            ans = ans << 1;
            ans += (a1[i] & 1) * (a2[i] & 1);
        }
        return ans;
    }
};