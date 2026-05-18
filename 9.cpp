class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0||(x%10==0 && x!=0))
        {
            return false;
        }
        int y, revhalf = 0;
        while(x>revhalf)
        {
            y = x%10;
            x = x/10;
            revhalf = revhalf*10+y;
        }
        if(x==revhalf||x==revhalf/10)
            return true;
        else
            return false;
    }
};