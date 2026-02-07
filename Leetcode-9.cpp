class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;

        int x_copy = x;
        long long reverse = 0;

        while (x != 0) {
            int remainder = x % 10;
            reverse = reverse * 10 + remainder;
            x /= 10;
        }

        return x_copy == reverse;
    }
};
