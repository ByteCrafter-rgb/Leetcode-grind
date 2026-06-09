// Last updated: 6/9/2026, 9:13:22 PM
class Solution {
public:
    vector<bool> vis;
    vector<vector<int>> adj;

    void dfs(int node){
        vis[node] = true;

        for(auto v: adj[node]){
            if(!vis[v]) dfs(v);
        }
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vis.resize(n);
        vis.assign(n,false);
        adj.resize(n);

        for(auto i: edges){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        dfs(source);
        return vis[destination];
    }
};