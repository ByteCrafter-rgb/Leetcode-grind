// Last updated: 6/9/2026, 9:13:25 PM
class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return gcd(nums[0],nums.back());
    }
};