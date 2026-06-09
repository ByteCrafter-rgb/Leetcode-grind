// Last updated: 6/9/2026, 9:11:10 PM
class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int ans = k;
        // sort(nums.begin(),nums.end());
        set<int> st(nums.begin(),nums.end());
        for(auto i:st){
            // cout<<i<<" "<<ans<<"\n";
            if(i%k == 0 && i != ans){
                break;
                // return ans;
            } else if(i >= k && i%k == 0 ){
                ans += k;
            }
            
        }
        return ans;
    }
};