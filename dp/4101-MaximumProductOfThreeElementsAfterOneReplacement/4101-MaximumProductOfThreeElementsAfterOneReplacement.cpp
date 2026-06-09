// Last updated: 6/9/2026, 9:11:07 PM
class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        long long x,y,z;
        x = nums[0];y = nums[1];z = nums.back();
        long long p,q,r;
        p = nums[n-1];q = nums[n-2];r = nums[n-3];

        long long mul = x*(-1e5)*z;
        mul = max(p*q*(100000ll),mul);
     mul = max(p*q*(-100000ll),mul);
        mul = max(x*z*(100000ll),mul);
        mul = max(x*y*(100000ll),mul);
        return mul;
        
    }
};