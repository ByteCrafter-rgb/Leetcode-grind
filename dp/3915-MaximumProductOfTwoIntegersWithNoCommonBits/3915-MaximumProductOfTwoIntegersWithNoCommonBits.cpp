// Last updated: 6/9/2026, 9:11:31 PM
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        // find max element in the arr
        int max_n = *max_element(nums.begin(),nums.end());
        // found the max power of 2 that divides it
        int msb = log2(max_n);
        // build a bitmask filled with all 1s till that bit.
        int max_mask = (1 << (msb + 1)) - 1;

        // build a dp arr of max mask size?
        vector<int> dp(max_mask + 1);

        // answer intially for each number is 
        for(auto x:nums) dp[x] = x;

        // build the dp

            // Subset over sum DP
            // every number will forward its information up thorugh single bit
            // differences and eventually reach where the info is required.
        for(int b = 0;b <= msb; b++){
            for(int mask = 0;mask < max_mask;mask++){
                if(mask & (1 << b)){
                    // go to the numbers 1 bit smaller sub-set 
                    // sub-set must have already got the info from 
                    // its sub-set.
                    dp[mask] = max(dp[mask], dp[mask ^ (1<<b)]);
                }
            }
        }

        long long ans = 0;
        for(int n:nums){
            ans = max(ans,1LL*n*dp[max_mask^n]);
            // max_mask^n is not the answer, but dp[_] 
            // stored the max answer possible by taking max of each sub-sets
        }
        return ans;
    }
};