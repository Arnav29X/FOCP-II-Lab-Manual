class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;

        long long x = (long long)dividend / divisor;
        return (int)x;
    }
};
