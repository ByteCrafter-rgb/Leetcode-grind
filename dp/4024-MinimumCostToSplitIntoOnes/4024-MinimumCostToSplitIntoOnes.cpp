// Last updated: 6/9/2026, 9:11:21 PM
class Solution {
public:
    int n;
    int INF = 1e9;
    int dp[505];
    int rec(int x){
        if(x == 1) return 0;
        if(x <= 0) return INF; 

        if(dp[x]!=-1) return dp[x];
        int ans = INF;
        for(int i=1;i<x;i++){
            ans = min(ans, rec(i) + rec(x-i) + i*(x-i));
        }

        return dp[x] = ans;
    }

    int minCost(int n_) {
        n = n_;
        memset(dp,-1,sizeof(dp));
        return rec(n);
    }
};