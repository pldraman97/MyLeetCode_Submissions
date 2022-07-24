class Solution {
public:
    string ri(string A)
    {
        reverse(A.begin(), A.end());
        for(int i = 0; i < A.size(); i++)
        {   
            if(A[i] == '1')
                A[i] = '0';
            else 
                A[i] = '1';
        }
        cout << A;
        return A;
    }
    string make(int n)
    {
        string A = "0", B;
        for(int i = 2; i <= n; i++)
        {
            B = A + "1" + ri(A);
            A = B;
        }
        return A;
    }
    char findKthBit(int n, int k) {
        string Sn = make(n);
        return Sn[k - 1];
    }
};