// Last updated: 6/9/2026, 9:11:05 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int mn = 110, mx = 0;
        map<int,int> mp;
        for(auto i:nums) {
            mp[i]++;
            mn = min(mn, i);
            mx = max(mx,i);
        }

        vector<int> rem;
        for(int i=mn;i<mx;i++){
            if(mp.find(i)==mp.end()){
                rem.push_back(i);
            }
        }
        sort(rem.begin(),rem.end());

        return rem;

        
    }
};