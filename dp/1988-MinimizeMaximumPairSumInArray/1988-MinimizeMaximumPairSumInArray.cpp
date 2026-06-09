// Last updated: 6/9/2026, 9:13:51 PM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        // return nums[nums.size()-1]+nums[0];
        int i=0,j=nums.size()-1,mx=INT_MIN;
        while(j>i){
            mx=max(mx,nums[i]+nums[j]);
            i++;j--;
        }
        return mx;
    }
};