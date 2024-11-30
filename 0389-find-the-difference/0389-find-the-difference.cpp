class Solution {
public:
    char findTheDifference(string s, string t) {
        int size = s.length();
        vector<int> stringAddress(size, -1);
        bool match = false;

        for (int i = 0; i < t.length(); i++) {
            match = false;

            for (int j = 0; j < s.length(); j++) {
                if (stringAddress[j] == -1 && t[i] == s[j]) {
                    stringAddress[j] = i;
                    match = true;
                    break;
                }
            }

            if (!match) {
                return t[i];
            }
        }

        return t.back();
    }
};