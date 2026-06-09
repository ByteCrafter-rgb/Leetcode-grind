// Last updated: 6/9/2026, 9:10:41 PM
class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int> e,o;
        int n = nums1.size();

        for(int i=0;i<n;i++){
            if(nums1[i]%2 == 0) e.push_back(-nums1[i]);
            else o.push_back(-nums1[i]);
        }

        if(o.size() == 0 || e.size() == 0) return true;

        sort(o.begin(),o.end());
        sort(e.begin(),e.end());

        bool ans1  = true;

        // all even

        for(auto i:nums1){
            if(i%2 == 0) continue;
            auto itr = upper_bound(o.begin(),o.end(),i);
            if(itr == o.end()) {
                ans1 = false;
                break;
            }
        }

        bool ans2 = true;
        // for(auto i:o) cout<<i<<" ";
        // cout<<"\n";
         for(auto i:nums1){
             // cout<<ans1 <<" "<<ans2<<"\n";
            if(i%2 == 1) continue;
            auto itr = upper_bound(o.begin(),o.end(),-i);
             
            if(itr == o.end()) {
                ans2 = false;
                break;
            }
        }
        // cout<<ans1 <<" "<<ans2<<"\n";
        return ans1 || ans2;
    }
};