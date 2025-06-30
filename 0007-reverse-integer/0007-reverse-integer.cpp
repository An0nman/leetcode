class Solution {
public:
    int reverse(int x) {
        int temp=0;
        while(x){
            if(temp>INT_MAX/10||temp<INT_MIN/10){
                return 0;
            }
            temp*=10;
            temp+=x%10;
            x=x/10;
            
        }
        return temp;
    }
};