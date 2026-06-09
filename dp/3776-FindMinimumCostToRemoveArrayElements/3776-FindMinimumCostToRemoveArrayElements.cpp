// Last updated: 6/9/2026, 9:11:39 PM
class Solution {
public:
    int n;
    int INF = INT_MAX;
    vector<pair<int,int>> vp;
    int dp[1003];
    int rec(int idx){
        if(idx == n-1){
            return vp[idx].first;
        }
        if(idx >= n){
            return INF;
        }
        if(dp[idx]!=-1) return dp[idx];
        int nxt = vp[idx].second;
        int cost = INF;
        if(nxt >= n || nxt+1 >= n){
            // remove both
            if(nxt >= n)
                cost = min(cost, vp[idx].first);
            else 
                cost = min(cost, max(vp[idx].first,vp[nxt].first));
        } else {
            int first = vp[idx].first;
            int second = vp[nxt].first;
            int third = vp[nxt+1].first;

            // mark the next index of first
            vp[idx].second = nxt + 2;
            // keep first
            cost = min(cost,max(second,third) + rec(idx));

            // mark the next index of second
            vp[idx].second = nxt;
            vp[nxt].second = nxt + 2;
            // keep first
            cost = min(cost,max(third,first) + rec(nxt));

            // mark the next index of second
            vp[nxt].second = nxt + 1;
            vp[nxt + 1].second = nxt + 2;
            // keep first
            cost = min(cost,max(second,first) + rec(nxt+1));
        }
        return dp[idx] = cost;
    }

    int minCost(vector<int>& nums) {
         n = nums.size();
        for(int i=0;i<n;i++){
            vp.push_back({nums[i],i+1});
        }
        memset(dp,-1,sizeof(dp));
        return rec(0);
    }
};