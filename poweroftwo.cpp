//November 28th, 2022


class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<0)
            return false;
        if (n==1)
            return true;
        if (n==0)
            return false;
        while (n>1){
            if (n%2==1)
                return false;
            n/=2;
        }
        return true;
    }
};
