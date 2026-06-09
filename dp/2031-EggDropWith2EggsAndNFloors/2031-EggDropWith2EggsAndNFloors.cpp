// Last updated: 6/9/2026, 9:13:39 PM
class Solution {
public:
    int twoEggDrop(int n) {
        vector<vector<int>> dp(3,vector<int>(n+1));
        for(int i=0;i<=n;i++) dp[0][i]=0;
        for(int i=0;i<=n;i++) dp[1][i]=i;
        for(int i=0;i<3;i++) dp[i][1]=1;
        
        for(int i=2;i<3;i++){
            for(int j=2;j<=n;j++){
                int mn=INT_MAX;
                for(int k=j-1;k>=0;k--){
                    mn=min(mn,max(dp[i][k],dp[i-1][j-k-1]));
                }
                dp[i][j]=mn+1;
            }
        }
        // for(auto i:dp){
        //     for(auto j:i){
        //         cout<<j<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        return dp[2][n];
    }
};