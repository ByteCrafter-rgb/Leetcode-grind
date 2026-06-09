// Last updated: 6/9/2026, 9:10:35 PM
class Solution {
public:
    vector<int> findDegrees(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<int> ans(n,0);

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]){
                    ans[i]++;
                    // ans[j]++;
                }
            }
        }
        return ans;
    }
};