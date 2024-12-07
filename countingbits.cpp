//December 5th, 2022


class Solution {
public:
    vector<int> countBits(int n) {
        
        
        vector<int> ans(n+1);
        for (int i=0; i<=n; i++){
        int pow=0;
        int a=i;
        while (a!=0){
            if (a%2==1)
                pow++;
            a/=2;
        }
            ans[i]=pow;
        }
        return ans;
    }
};
