// Last updated: 6/9/2026, 9:11:47 PM
class Solution {
public:
    vector<int> arr;
    int n;
    int INF = 1e9;
    int dp[100100][2];
    int rec(int level,bool is_flipped){
        if(level == n){
             return 0; 
        }

        if(dp[level][is_flipped] != -1) return dp[level][is_flipped];

        int ans = INF;
        if((arr[level] == 0 && !is_flipped) || (arr[level] == 1 && is_flipped)){
            ans = min(ans, 1 + rec(level + 1, !is_flipped));
        } else {
            ans = min(ans, rec(level + 1, is_flipped));
        }

        return dp[level][is_flipped] = ans;
    }


    int minOperations(vector<int>& nums) {
        arr = nums;
        n = nums.size();
        memset(dp,-1,sizeof(dp));
        return rec(0,0);
    }
};