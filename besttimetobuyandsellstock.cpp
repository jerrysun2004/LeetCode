//November 17th, 2024
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int L=prices[0];
        int R=prices[0];
        for (int a: prices){
            R=a;
            maxP= R-L > maxP ? R-L : maxP;
            if (R<L)
            L=R;
        }
        return maxP;
    }
};
