// Last updated: 6/9/2026, 9:13:34 PM
class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()-1]*nums[nums.size()-2]-nums[0]*nums[1];
    }
};