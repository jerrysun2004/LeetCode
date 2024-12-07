//November 29th, 2022

class Solution {
public:
    bool canJump(vector<int>& nums) {
        //very simiilar to the last jump game
        //dp again
        //start from start and go to end
        // maintain a bool array 
        //for each jump size update the ones that can be jumped by dp[i]=dp[prev] &&
        int n=nums.size();
        bool dp[n];
        for (int i=0; i<n; i++)
            dp[i]=false;
        dp[0]=true;
        for (int i=0; i<=n-1; i++){
            for (int j=1; j<nums[i]+1; j++)
            {
                if (i+j<=n-1){
                if (dp[i])
                    dp[i+j]=true;
                    if (dp[n-1]==true)
                        return true;
                }
            }  
            }
        for (int i=0; i<n; i++)
            cout << dp[i] << " ";
        return dp[n-1];
    }
};
