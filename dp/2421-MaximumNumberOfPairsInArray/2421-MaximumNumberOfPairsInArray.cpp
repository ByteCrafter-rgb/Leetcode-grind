// Last updated: 6/9/2026, 9:12:25 PM
class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mp;
        for(auto i:nums) mp[i]++;
        int cnt=0;
        for(auto i:mp){
            if(i.second>=2) cnt+=(i.second/2);
        }
        return {cnt,n-2*cnt};
    }
};