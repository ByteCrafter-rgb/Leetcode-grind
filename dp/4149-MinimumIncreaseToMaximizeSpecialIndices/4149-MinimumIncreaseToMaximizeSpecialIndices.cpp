// Last updated: 6/9/2026, 9:11:02 PM
class Solution {
public:
int n ;
    long long dp[100002][2];
    long long rec(int idx, vector<int>& nums,bool skip){
        if(idx >= n-1) return 0;

        if(dp[idx][skip]!=-1) return dp[idx][skip];
        //choose

        long long ans = max(0,max(nums[idx-1],nums[idx+1])+1 - nums[idx]);
       long long res = 1e18;
        if(skip){
           return dp[idx][skip] = ans + rec(idx+2,nums,skip);
        }else {
            dp[idx][false] = rec(idx+2,nums,false) + ans;
            dp[idx][true] = rec(idx+3,nums,true) + ans;
        }
    //    dp[idx][skip] =
        return  min(dp[idx][0],dp[idx][1]);
    }

    long long minIncrease(vector<int>& nums) {
        n = nums.size();
        if (n % 2) {
            long long ans = 0;
            for (int i = 1; i < n - 1; i += 2) {
                ans += max(0, max(nums[i-1], nums[i+1]) + 1 - nums[i]);
            }
            return ans;                    
        }
        memset(dp,-1,sizeof(dp));
        return min(rec(1,nums,0),rec(2,nums,1)); 
    }
};