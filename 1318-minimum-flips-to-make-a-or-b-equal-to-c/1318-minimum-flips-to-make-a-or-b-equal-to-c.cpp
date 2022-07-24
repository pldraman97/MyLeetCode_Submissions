class Solution {
public:
    int minFlips(int a, int b, int c) {
        int minFlips = 0;
        for(int i = 0; i < 32; i++)
        {
            int ai, bi, ci;
            ai = (a & (1 << i)) >> i;
            bi = (b & (1 << i)) >> i;
            ci = (c & (1 << i)) >> i;
            if(ci == 1)
            {
                if(ai != 1 && bi != 1)
                    minFlips++;
            }
            else
            {
                if(ai != 0)
                    minFlips++;
                if(bi != 0)
                    minFlips++;
            }
        }
        return minFlips;
    }
};