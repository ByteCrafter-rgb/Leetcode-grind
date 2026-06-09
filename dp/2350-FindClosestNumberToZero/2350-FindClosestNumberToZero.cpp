// Last updated: 6/9/2026, 9:12:56 PM
class Solution {
public:
    int findClosestNumber(vector<int>& nums) {
        vector<int> ans;
        int mn=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mn=min(mn,abs(nums[i]-0));
        }
        for(auto i:nums){
            if(i==mn) return i;
        }
        return -mn;
        // sort(ans.begin(),ans.end());
        
    }
};