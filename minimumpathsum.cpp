//November 30th, 2022



class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        //another classic dp like problem
        //start from top iterate from right and bottum
        //if not corner dp[m][n]=dp[m-1][n]+dp[m][n-1]
        //if corner dp[m][n]=dp[m-1][n] if left side
        //dp[m][n]=dp[m][n-1] if top side
        int dp[grid.size()][grid[0].size()];
        
        for (int i=0; i<grid.size(); i++){
            for (int j=0; j<grid[i].size(); j++){
                //top side
                if (i==0 && j==0){
                    dp[i][j]=grid[i][j];
                }
                else if (j==0)
                {
                    cout << grid[i][j] << endl;
                    dp[i][j]=dp[i-1][j]+grid[i][j];
                }
                else if (i==0){
                    cout << grid[i][j] << endl;
                    dp[i][j]=dp[i][j-1]+grid[i][j];
                }
                else{
                    dp[i][j]=min(dp[i-1][j],dp[i][j-1])+grid[i][j];
                }
                
            }
        }
        for (int i=0; i<grid.size(); i++){
            cout << endl;
            for (int j=0; j<grid[0].size(); j++)
                cout << dp[i][j] << " ";
        }
        return dp[grid.size()-1][grid[0].size()-1];
    }
};
