class Solution {
public:
    bool isChar(char c) {
        return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9');
    }

    bool isPalin(string &s, int i, int j) {
        if (i >= j) return true;
        if (!isChar(s[i])) return isPalin(s, i + 1, j);
        if (!isChar(s[j])) return isPalin(s, i, j - 1);
        if (tolower(s[i]) != tolower(s[j])) return false;
        return isPalin(s, i + 1, j - 1);
    }

    bool isPalindrome(string s) {
        return isPalin(s, 0, s.length() - 1);
    }
};
