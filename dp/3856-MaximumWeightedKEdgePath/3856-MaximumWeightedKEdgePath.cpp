// Last updated: 6/9/2026, 9:11:36 PM
class Solution {
public:
    vector<vector<pair<int,int>>> adj;
    int k,t;
    
    int dfs(int node,int ed_cnt,int ed_sum,vector<vector<unordered_map<int,int>>> &dp){
        if(ed_cnt == k) {
            if(ed_sum < t) return ed_sum;
            return -1;
        }
        // if(ed_sum >= t) return 0;

        if(dp[node][ed_cnt].count(ed_sum)) return dp[node][ed_cnt][ed_sum];
        int ans = -1;
        for(auto &e:adj[node]){
            if(e.second + ed_sum >= t) continue;
            ans = max(ans,dfs(e.first,ed_cnt+1,ed_sum+e.second,dp));
        }

        return dp[node][ed_cnt][ed_sum] = ans;
    }


    int maxWeight(int n, vector<vector<int>>& edges, int k_, int t_) {
        adj.resize(n);
        k = k_;t = t_;
        for(auto &e:edges){
            adj[e[0]].push_back({e[1],e[2]});
        }

        vector<vector<unordered_map<int,int>>> dp(n,vector<unordered_map<int,int>>(k+1));

        int ans = -1;
        for(int i=0;i<n;i++){
            ans = max(ans,dfs(i,0,0,dp));
        }


        return ans;
    }
};