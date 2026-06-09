// Last updated: 6/9/2026, 9:12:43 PM
class Solution {
public:
    int rearrangeCharacters(string s, string t) {
        map<int,int> mp,mp2;
        for(auto i:s) mp[i]++;
        for(auto i:t) mp2[i]++;
        int ans=INT_MAX;
        for(int i=0;i<t.size();i++){
        ans=min(ans,mp[t[i]]/mp2[t[i]]);
        }
        return ans;
    }
};