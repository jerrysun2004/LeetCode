//December 1st, 2022


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        //another classic dp problem
        //start from top and end at bottom
        //if there is no obstacle it is similar to first unique paths
        //if there is obstacle dp[i][j]=0
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        int dp[m][n];
        dp[0][0]=1;
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++){
                if (i==0 && j==0 && obstacleGrid[i][j]==1)
                    return 0;
                if (i==0 && j==0)
                    continue;
                if (obstacleGrid[i][j]==1)
                    dp[i][j]=0;
                else if (i==0 && j!=0){
                    dp[i][j]=dp[i][j-1];
                }
                else if (j==0 && i!=0){
                    dp[i][j]=dp[i-1][j];
                }
                else{
                    dp[i][j]=dp[i][j-1]+dp[i-1][j];
                }
            }
        }
        return dp[m-1][n-1];
    }
};
