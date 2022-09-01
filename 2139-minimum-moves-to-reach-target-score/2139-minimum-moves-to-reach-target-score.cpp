class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int moves = 0;
        while(maxDoubles && target != 1)
        {
            if(target % 2)
            {
                moves++;
                target--;
            }
            else
            {
                target /= 2;
                moves++;
                maxDoubles--;
            }
        }
        return target - 1 + moves;
    }
};