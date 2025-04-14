class Solution {
    public:
        string convert(string s, int numRows) {
            if (numRows <= 1 || s.length() <= 1) {
                return s;
            }
            vector<string> rows(min(numRows, (int)s.size()));
            int currentRow = 0;
            bool goingDown = false;
    
            for (char c : s) {
                rows[currentRow] += c;
                if (currentRow == 0 || currentRow == numRows - 1) {
                    goingDown = !goingDown;  // Change direction
                }
                currentRow += goingDown ? 1 : -1;
            }
            string ans;
            for (string row : rows) {
                ans += row;
            }
    
            return ans;
        }
    };