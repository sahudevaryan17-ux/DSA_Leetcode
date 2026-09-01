class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int a = 1;  // ways for 1 stair
        int b = 2;  // ways for 2 stairs

        for (int i = 3; i <= n; i++) {
            int c = a + b;
            a = b;
            b = c;
        }

        return b;
    }
};