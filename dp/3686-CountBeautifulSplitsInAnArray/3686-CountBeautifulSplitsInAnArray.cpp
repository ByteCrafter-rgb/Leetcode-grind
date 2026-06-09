// Last updated: 6/9/2026, 9:11:46 PM

int dp[5001][5001] = {};
class Solution {
public:
    int beautifulSplits(vector<int>& nums) {
        int n = nums.size();

        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>i;j--){
                if(nums[i] == nums[j]) dp[i][j] = 1 + dp[i+1][j+1];
                else dp[i][j] = 0;
            }
        }

        int ans = 0;
        for(int i=1;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(min(dp[0][i], j-i) >= i) ans++;
                else if(min(dp[i][j],n-j) >= j-i) ans++;
            }
        }
        return ans;


    }
};