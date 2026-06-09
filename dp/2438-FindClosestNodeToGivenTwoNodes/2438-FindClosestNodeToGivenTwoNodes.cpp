// Last updated: 6/9/2026, 9:12:14 PM
class Solution {
public:
    void dfs(int node,vector<int>&edg,vector<bool>&vis,vector<int>&dis,int far){
        if(vis[node]) return;
        vis[node]=1;
        dis[node]=far;
        if(edg[node]!=-1){
            dfs(edg[node],edg,vis,dis,far+1);
        }
        else return;
    }
    int closestMeetingNode(vector<int>& edg, int n1, int n2) {
        int n=edg.size();
        vector<bool> vis(n);
        vector<int> dis(n,-1);
        dfs(n1,edg,vis,dis,0);
        // for(auto i:dis) cout<<i<<" "; cout<<"\n";
         vector<bool> vis2(n);
        vector<int> dis2(n,-1);
        dfs(n2,edg,vis2,dis2,0);
            // for(auto i:dis2) cout<<i<<" ";
        
        int ans=INT_MAX,x=-1,p=-1;
        for(int i=0;i<n;i++){
            if(dis[i]!=-1 and dis2[i]!=-1)
            ans=min(ans,max(dis[i],dis2[i]));
            // cout<<ans<<" ";
        }
        for(int i=0;i<n;i++){
            if(max(dis[i],dis2[i])==ans){
                return i;
            }
        }
        
        return -1;
    }
};