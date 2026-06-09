// Last updated: 6/9/2026, 9:11:20 PM
class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int n = nums.size();
        int xr = 0;
        bool flg = 0;
        for(auto i:nums){
            xr ^= i;
            if(i > 0) flg = 1;
        }
        if(xr != 0) return n;
        if(flg == 0) return 0;
        
        return n-1;
    }
};