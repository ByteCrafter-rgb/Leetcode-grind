// Last updated: 6/9/2026, 9:13:27 PM
class Solution {
public:
    vector<vector<int>> findFarmland(vector<vector<int>>& land) {
        int n=land.size();
        int m=land[0].size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(land[i][j]==0) continue;
                int c1=i;
                while(c1<n and land[c1][j]==1) c1++;
                int c2=j;
                while(c2<m and land[i][c2]==1) c2++;
                int cc=(c1!=0)? c1-1:c1;
                int rr=(c2!=0)? c2-1:c2;
                ans.push_back({i,j,cc,rr});
                
                for(int k=i;k<c1;k++){
                    for(int l=j;l<c2;l++) land[k][l]=0;
                }
            }
        }
        return ans;
    }
};