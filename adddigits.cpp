//November 28th, 2022

class Solution {
    int digitsum(int x){
        int ans=0;
          while (x!=0){
            ans+=x%10;
            x/=10;
        }
        return ans;
    }
public:
    int addDigits(int num) {
      while (num>=10){
          num=digitsum(num);
      }
        return num;
    }
};
