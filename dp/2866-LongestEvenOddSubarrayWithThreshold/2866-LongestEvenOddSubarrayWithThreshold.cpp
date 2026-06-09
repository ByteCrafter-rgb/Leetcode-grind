// Last updated: 6/9/2026, 9:11:55 PM
class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int th) {
        int n=nums.size();
        int mx=0;
        for(int l=0;l<n;l++){
            if(nums[l]%2!=0 or nums[l]>th) continue;
            for(int r=l;r<n;r++){
                bool flg=true;
                for(int i=l+1;i<=r;i++){
                    if(nums[i]>th or nums[i]%2==nums[i-1]%2) flg=false;
                }
                if(flg) mx=max(r-l+1,mx);
            }
        }
        return mx;
    }
};