// Last updated: 6/9/2026, 9:10:57 PM
class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int> mp;
        for(auto i:nums) mp[i]++;

        int a = -1,b = -1,af = 0;

        for(auto i:mp){
            if(a == -1){
                a = i.first;
                af = i.second;
            } 
        }
        mp.erase(a);
        for(auto i:mp){
            if(b == -1 && i.second != af){
                b = i.first;
            }
        }
        if(a==-1 || b==-1) return {-1,-1};
        return {a,b};
    }
};