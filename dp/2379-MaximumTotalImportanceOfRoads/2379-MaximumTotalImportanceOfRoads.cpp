// Last updated: 6/9/2026, 9:12:36 PM
class Solution {
public:
    #define ll long long 
    // int cnt=0;
    // void dfs(int node,vector<bool>& vis,vector<vector<int>> &adj){
    //     if(vis[node]) return ;
    //     vis[node]=1;
    //     cnt++;
    //     for(auto i:adj[node]){
    //         if(!vis[i]) dfs(i,vis,adj);
    //     }
    // }
    long long maximumImportance(int n, vector<vector<int>>& r) {
        vector<vector<int>> adj(n);
        for(auto i:r){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
       vector<int> deg(n+1);
        for(int i=0;i<n;i++){
            deg[i]=adj[i].size();
        }
        long long ans=0;
        sort(deg.begin(),deg.end(),greater<int>());
        long long tmp=n;
        for(int i=0;i<n;i++){
            if(deg[i]>0){
                ans+=(deg[i]*(tmp));
                tmp--;
            }
        }
        return ans;
    } 
};