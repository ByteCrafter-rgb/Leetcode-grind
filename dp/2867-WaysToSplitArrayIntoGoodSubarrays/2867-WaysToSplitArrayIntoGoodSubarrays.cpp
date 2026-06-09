// Last updated: 6/9/2026, 9:11:54 PM
class Solution {
public:
    #define ll long long
    int numberOfGoodSubarraySplits(vector<int>& nums) {
        int n=nums.size(),i=0;
        while(i<n and nums[i]==0 ) i++;
        if(i>=n) return 0;
        ll cnt=0;
        ll mod=1000000007;
        ll ans=1;
        for(;i<n;i++){
            if(nums[i]==1){
                ans=ans*(cnt+1)%mod;
                cnt=0;
            }
            else cnt++;
            
        }
        return ans%mod;
    }
};