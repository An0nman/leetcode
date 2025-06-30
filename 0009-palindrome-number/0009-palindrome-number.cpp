class Solution {
public:
    bool isPalindrome(int x) {
        if(x>=0){
        int digit=0;
        long result = 0;
        int j = x;
        while(j != 0)
        {
            digit = j % 10;   //  1
            j /= 10;        //  1 / 10 = 0
            result = (result*10) + digit; // 120 + 1= 121

        }
        if(result == x)
        {
            return true;
        }else{
            return false;
        }
        }
        else{
            return false;
        }
    }
};