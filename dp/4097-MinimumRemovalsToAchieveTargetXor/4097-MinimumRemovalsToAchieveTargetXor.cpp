// Last updated: 6/9/2026, 9:11:08 PM
class Solution {
public:
    int n;
    int des;
    vector<int> nums;
    int dp[42][17005];
    int rec(int idx,int xr){
        if(idx >=n) {
            // cout<<xr<<" "<<rem<<"\n";
            if(xr == des){
                return 0;
            } else {
                return 50;
            }
        }
        if(dp[idx][xr]!=-1) return dp[idx][xr];
        int ans = 50;
        // choose
        xr ^= nums[idx];
        ans  = rec(idx + 1,xr);

        // not choose
        xr ^= nums[idx];
        ans = min(ans,rec(idx + 1, xr) + 1);
        return dp[idx][xr] = ans;
    }
    int minRemovals(vector<int>& arr, int tar) {
        nums = arr;
        n = arr.size();
        des = tar;
        memset(dp, -1, sizeof(dp));
        
        int res = rec(0,0);
        return (res == 50) ? -1:res;
    }
};