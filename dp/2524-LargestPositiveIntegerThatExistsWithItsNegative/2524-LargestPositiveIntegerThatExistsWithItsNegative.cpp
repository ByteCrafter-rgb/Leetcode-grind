// Last updated: 6/9/2026, 9:12:08 PM
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
        }
        int cnt=0,ans=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                if(mp[-nums[i]]>0 and nums[i]>ans){
                    cnt++;ans=nums[i];
                    
                }
            }
        }
        return ans;
    }
};