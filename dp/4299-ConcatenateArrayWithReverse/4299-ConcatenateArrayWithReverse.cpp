// Last updated: 6/9/2026, 9:10:13 PM
class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> a,b;
        a = nums;
        reverse(nums.begin(),nums.end());

        b = nums;
        vector<int> c;
        for(auto i:a) c.push_back(i);
        
        for(auto i:b) c.push_back(i);
        return c;
    }
};