// Last updated: 6/9/2026, 9:13:44 PM
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<vector<long long>> memo(nums.size()+1,vector<long long>(2,INT_MIN));
        return dp(nums,0,0,memo);
    }
    long long dp(vector<int>& nums,int i,bool f, vector<vector<long long>> &memo){
        if(memo[i][f]!=INT_MIN) return memo[i][f];
        if(i==nums.size()) return 0;
        return memo[i][f]=max(dp(nums,i+1,f,memo),dp(nums,i+1,1-f,memo)+(f==0? +nums[i]:-nums[i]));
    }
};