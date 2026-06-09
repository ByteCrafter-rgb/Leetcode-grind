// Last updated: 6/9/2026, 9:10:48 PM
class Solution {
public:
    int firstUniqueEven(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        for(auto i:nums){
            if(i%2 == 0 && mp[i]==1) return i;
        }
        return -1;
    }
};