// Last updated: 6/9/2026, 9:11:27 PM
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int ans = 0;
        for(auto i:nums){
            if(i%2== 0){
                ans |= i;
            }
        }
        return ans;
    }
};