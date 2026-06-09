// Last updated: 6/9/2026, 9:11:28 PM
class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        int freq[101];
        for(auto i:friends){
            freq[i]++;
        }
        vector<int> ans;
        for(auto i:order){
            if(freq[i] > 0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};