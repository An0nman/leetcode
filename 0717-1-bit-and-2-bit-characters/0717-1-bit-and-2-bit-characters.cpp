class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int bit_size = bits.size();
        int i;
        for (i = 0; i < bit_size-1; i++) {
            if (bits[i] == 1)
                i++;
        }
        return i == bit_size - 1 ? true : false;
    }
};