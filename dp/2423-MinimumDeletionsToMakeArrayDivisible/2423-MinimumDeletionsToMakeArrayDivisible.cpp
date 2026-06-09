// Last updated: 6/9/2026, 9:12:21 PM
class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& nd) {
        int hcf=nd[0];
        for(auto i:nd){
            hcf=__gcd(hcf,i);
        }
        // cout<<hcf<<"\n";
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            if(__gcd(nums[i],hcf)>=1 and hcf>=nums[i] and hcf%nums[i]==0){
                // cout<<i<<" "<<nums[i]<<"\n";
                return i;
            }
        }
        return -1;
    }
};