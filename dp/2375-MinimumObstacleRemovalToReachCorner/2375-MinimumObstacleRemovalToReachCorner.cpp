// Last updated: 6/9/2026, 9:12:41 PM
class Solution {
public:
    int minimumObstacles(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        
        vector<int> dx={1,-1,0,0};
        vector<int> dy={0,0,1,-1};
        vector<vector<int>> dis(n,vector<int>(m,INT_MAX));
        vector<vector<bool>> vis(n,vector<bool>(m,0));
        
        deque<pair<int,int>> q;
        q.push_back({0,0});
        dis[0][0]=0;
        while(!q.empty()){
            auto ct=q.front();
            q.pop_front();
            int x=ct.first;
            int y=ct.second;
            for(int i=0;i<4;i++){
                int cx=x+dx[i];
                int cy=y+dy[i];
                if(cx<0 or cx>=n or cy<0 or cy>=m) continue;
                
               if(!vis[cx][cy]){ 
                   
                    dis[cx][cy]=dis[x][y]+(grid[cx][cy]==1);
                if(grid[cx][cy]==1) q.push_back({cx,cy});
                else q.push_front({cx,cy});
                   vis[cx][cy]=1;
               }
            }
        }
        return dis[n-1][m-1];
    }
};