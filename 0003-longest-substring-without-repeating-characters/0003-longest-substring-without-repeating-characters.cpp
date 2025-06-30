
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> seen;
        int left = 0, right = 0, maxLength = 0;

        while (right < s.length()) {
            if (seen.find(s[right]) == seen.end()) {
                seen.insert(s[right]);
                maxLength = max(maxLength, right - left + 1);
                right++;
            } else {
                seen.erase(s[left]);
                left++;
            }
        }

        return maxLength;
    }
};