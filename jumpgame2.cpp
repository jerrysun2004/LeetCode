//November 29th, 2022


class Solution {
public:
    int jump(vector<int>& nums) {
         int n=nums.size();
        //dp 
        //make sure I am solving the right problem
        //start from the back and go to the front
        //dp state is dp[i]=1+dp[i+j] where j ranges from 1 to nums[i]
        
        int dp[n];
        for (int i=0; i<n; i++){
            dp[i]=100000; //what should I initialize it to?
        }
        dp[n-1]=0;
    
      
        for (int i=n-1; i>=0; i--)
        {
            for (int j=1; j<nums[i]+1; j++)
            {
                if (j+i<=n-1){
                dp[i]=min(1+dp[j+i],dp[i]);
                }
            }
            
            
        }
        return dp[0];
    }
};
