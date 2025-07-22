class Solution {
public:
    string makeFancyString(string s) {
        int index = 0;
        int count = 0;
        string str;
        while (index < s.length()) {
            if (s[index] == s[index+1]) {
                count++;
            } else {
                count = 0;
            }
            if (count >= 2) {

            } else {
                str += s[index];
            }
            index++;
        }
        return str;
    }
};