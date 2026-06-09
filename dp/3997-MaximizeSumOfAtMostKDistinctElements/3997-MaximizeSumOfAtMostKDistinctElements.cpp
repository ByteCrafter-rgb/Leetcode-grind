// Last updated: 6/9/2026, 9:11:30 PM
class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int,greater<int>> st;
        for(auto i:nums){
            st.insert(i);
        }
        vector<int> ans;
        int cnt = 0;
        for(auto i:st){
            if(cnt < k){
                ans.push_back(i);
                cnt++;
            }
        }
        return ans;
    }
};