// Last updated: 6/9/2026, 9:11:42 PM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> dp(301,vector<int>(301,0));

        int ans = 0;

        for(int i=0;i<n;i++){
            int mx = 0;
            for(int d = 300;d>=0;d--){
                int prev_n = nums[i] - d;
                int next_n = nums[i] + d;
                int len = 0;
                if(prev_n >= 0){
                    len = dp[prev_n][d] + 1;
                }
                if(next_n <= 300){
                    len = max(dp[next_n][d] + 1, len);
                }
                mx = max(mx,len);

                dp[nums[i]][d] = mx;
                ans = max(ans, mx);
            }
        }
        return ans;
    }
};