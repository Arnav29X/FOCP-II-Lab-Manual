class Solution {
public:
    bool isPalindrome(string s) {
        string cleaned = "";

        for (int i = 0; i < s.length(); i++) {
            if (isalnum(s[i])) {
                cleaned += tolower(s[i]);
            }
        }

        int n = cleaned.length();
        for (int i = 0; i < n/2; i++) {
            if (cleaned[i] != cleaned[n - i - 1]) {
                return false;
            }
        }

        return true;
    }
};
