// Last updated: 6/9/2026, 9:12:17 PM
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        set<int> s;
        for(auto i:nums){
            if(i!=0) s.insert(i);
        }
        return s.size();
    }
};